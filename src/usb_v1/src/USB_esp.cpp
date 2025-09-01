#include <chrono>
#include <cmath>
#include <string>
#include <iostream>
#include <stdexcept>

#include <serial/serial.h>
#include <rclcpp/rclcpp.hpp>

#include "usb_v1/msg/joy.hpp"

#define LOOP_TIME_MIL 10 // 10 ms -> 100 Hz

typedef struct __attribute__((packed))
{
    uint8_t Header[2];
    union
    {
        uint8_t moveBtnByte;
        struct
        {
            uint8_t move1 : 1;
            uint8_t move2 : 1;
            uint8_t move3 : 1;
            uint8_t move4 : 1;
            uint8_t res1 : 2;
            uint8_t set1 : 1;
            uint8_t set2 : 1;
        } moveBtnBit;
    };
    union
    {
        uint8_t attackBtnByte;
        struct
        {
            uint8_t attack1 : 1;
            uint8_t attack2 : 1;
            uint8_t attack3 : 1;
            uint8_t attack4 : 1;
            uint8_t res1 : 4;
        } attackBtnBit;
    };
    union
    {
        int8_t stickValue[4];
        struct
        {
            int8_t stickLX;
            int8_t stickLY;
            int8_t stickRX;
            int8_t stickRY;
        } stickByte;
    };
} ControllerData_t;

class USB : public rclcpp::Node
{
public:
    ControllerData_t recvControllerData_t; //odject class about Data input
    rclcpp::Publisher<usb_v1::msg::Joy>::SharedPtr pubJoy; //odject class about Publisher
    rclcpp::TimerBase::SharedPtr timer_; //odject class about time
    std::shared_ptr<serial::Serial> _USB; //odject class about serial

    USB() : Node("USB_esp")
    {
        RCLCPP_INFO(this->get_logger(), "Starting USB node...");

        std::string port = "/dev/ttyUSB0";
        unsigned long baudrate = 115200;

        _USB = std::make_shared<serial::Serial>(port, baudrate, serial::Timeout::simpleTimeout(5)); //setting port

        pubJoy = create_publisher<usb_v1::msg::Joy>("Data", 10); //publisher topic "Data"

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(LOOP_TIME_MIL),
            std::bind(&USB::Runner, this)); //clock

        if (_USB && _USB->isOpen()) //check port input
        {
            RCLCPP_INFO(get_logger(), "Opened serial port %s @ %ld baud", port.c_str(), baudrate);
        }
        else
        {
            RCLCPP_FATAL(get_logger(), "Failed to open serial port '%s'", port.c_str());
            rclcpp::shutdown();
            return;
        }
    }

    void Runner()
    {
        if (_USB->available() >= sizeof(ControllerData_t))   //check input data
        {
            _USB->read((uint8_t *)&recvControllerData_t, sizeof(recvControllerData_t)); //read data

            usb_v1::msg::Joy msg;  //msg topic
            msg.header[0] = recvControllerData_t.Header[0];
            msg.header[1] = recvControllerData_t.Header[1];

            msg.move_1 = recvControllerData_t.moveBtnBit.move1;
            msg.move_2 = recvControllerData_t.moveBtnBit.move2;
            msg.move_3 = recvControllerData_t.moveBtnBit.move3;
            msg.move_4 = recvControllerData_t.moveBtnBit.move4;
            msg.set1 = recvControllerData_t.moveBtnBit.set1;
            msg.set2 = recvControllerData_t.moveBtnBit.set2;

            msg.attack1 = recvControllerData_t.attackBtnBit.attack1;
            msg.attack2 = recvControllerData_t.attackBtnBit.attack2;
            msg.attack3 = recvControllerData_t.attackBtnBit.attack3;
            msg.attack4 = recvControllerData_t.attackBtnBit.attack4;

            msg.stick_lx = recvControllerData_t.stickByte.stickLX;
            msg.stick_ly = recvControllerData_t.stickByte.stickLY;
            msg.stick_rx = recvControllerData_t.stickByte.stickRX;
            msg.stick_ry = recvControllerData_t.stickByte.stickRY;

            pubJoy->publish(msg); //send msg to topic"Data"
        }
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);  //ROS 2 runtime
    rclcpp::spin(std::make_shared<USB>()); //build Node "USB"
    rclcpp::shutdown(); //close Node "Ctrl-C"
    return 0;
}
