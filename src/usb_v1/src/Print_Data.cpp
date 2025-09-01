#include <chrono>
#include <cmath>
#include <string>
#include <iostream>
#include <stdexcept>

#include <stdio.h>
#include <serial/serial.h>
#include <rclcpp/rclcpp.hpp>

#include "usb_v1/msg/joy.hpp"

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

class PrintData : public rclcpp::Node
{

public:
    rclcpp::Subscription<usb_v1::msg::Joy>::SharedPtr subJoy; // Publisher_odject

    usb_v1::msg::Joy msg; // Joy_odject

    PrintData() : Node("Print_Data")
    {
        subJoy = create_subscription<usb_v1::msg::Joy>("Data", 10, std::bind(&PrintData::topic_callback, this, std::placeholders::_1)); // create subscription Receiver msg than run topic_callback Function
    }

    void topic_callback(const usb_v1::msg::Joy &msg)
    {
        RCLCPP_INFO(this->get_logger(),
                    "Header: [%C %C] ,"
                    "Move: [%d %d %d %d | set1:%d set2:%d], "
                    "Attack: [%d %d %d %d], "
                    "Sticks: [LX:%d LY:%d RX:%d RY:%d]",
                    msg.header[0],
                    msg.header[1],
                    msg.move_1,
                    msg.move_2,
                    msg.move_3,
                    msg.move_4,
                    msg.set1,
                    msg.set2,
                    msg.attack1,
                    msg.attack2,
                    msg.attack3,
                    msg.attack4,
                    msg.stick_lx,
                    msg.stick_ly,
                    msg.stick_rx,
                    msg.stick_ry); // print Data

        // RCLCPP_INFO(this->get_logger(), "OK");
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);                    // ROS 2 runtime
    rclcpp::spin(std::make_shared<PrintData>()); // build Node "USB"
    rclcpp::shutdown();                          // close Node "Ctrl-C"
    return 0;
}
