ros2 Receiver data esp32 too port serial

=install
-git clone https://github.com/Knnthiti/ROS2_USB_basic.git

=USE
-colcon build
-source install/setup.bash
-ros2 launch Showdata_USB_V1.py

=rqt_grash
<img width="770" height="270" alt="Screenshot from 2025-09-01 18-50-16" src="https://github.com/user-attachments/assets/9b5178ca-0573-41a9-9941-7c77b1ee85f6" />

=message
edit msg folder src/usb_v1/msg/Joy.msg

example msg
uint8[2] header

uint8 move_1
uint8 move_2
uint8 move_3
uint8 move_4
uint8 set1
uint8 set2 

uint8 attack1
uint8 attack2
uint8 attack3
uint8 attack4

int8 stick_lx
int8 stick_ly
int8 stick_rx
int8 stick_ry

edit package folder src/usb_v1/src/USB_esp.cpp and src/usb_v1/src/Print_Data.cpp
edit esp folder esp/esp_send.ino

example Attributes
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
