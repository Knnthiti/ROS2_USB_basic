# ROS2 USB Serial Communication with ESP32

This project demonstrates how to send controller data from an **ESP32** via serial port and receive it in **ROS 2** using custom messages.  
It provides a simple publisher-subscriber setup to visualize controller input data (buttons and joystick values) in ROS 2.

---

## Features
- ESP32 sends structured controller data via USB serial.
- ROS 2 node (`USB_esp.cpp`) receives and publishes data as a custom message.
- ROS 2 node (`Print_Data.cpp`) subscribes and prints received data.
- Custom ROS 2 message (`Joy.msg`) defines button and joystick fields.
- Launch file included for easy startup.
- Compatible with **rqt_graph** for visualization.

---

## Installation

Clone the repository:
```
git clone https://github.com/Knnthiti/ROS2_USB_basic.git
cd ROS2_USB_basic
```

Build the workspace:
```
colcon build
```

Source the setup file:
```
source install/setup.bash
```
Usage
1. Launch the nodes
```
ros2 launch Showdata_USB_V1.py
```

This will:
Start the USB receiver node (reads serial data from ESP32).
Start the data printer node (logs decoded data).

2. Visualize with rqt_graph
```
rqt_graph
```
<img width="770" height="270" alt="Screenshot from 2025-09-01 18-50-16" src="https://github.com/user-attachments/assets/755a6a12-a27f-4e55-9599-dc7b39297372" />

---
## Custom Message Definition

File: (`src/usb_v1/msg/Joy.msg`)
```
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
```
## ROS2 USB Serial Communication with ESP32

This project demonstrates communication between an **ESP32** and **ROS 2** via USB serial.  
It sends controller data (buttons + joystick values) from ESP32 and decodes it in ROS 2 using custom messages.

## Editing the Data Structure
The **controller data struct** is defined in the ESP32 code:
```cpp
typedef struct __attribute__((packed))
{
    uint8_t Header[2];

    union {
        uint8_t moveBtnByte;
        struct {
            uint8_t move1 : 1;
            uint8_t move2 : 1;
            uint8_t move3 : 1;
            uint8_t move4 : 1;
            uint8_t res1  : 2;
            uint8_t set1  : 1;
            uint8_t set2  : 1;
        } moveBtnBit;
    };

    union {
        uint8_t attackBtnByte;
        struct {
            uint8_t attack1 : 1;
            uint8_t attack2 : 1;
            uint8_t attack3 : 1;
            uint8_t attack4 : 1;
            uint8_t res1    : 4;
        } attackBtnBit;
    };

    union {
        int8_t stickValue[4];
        struct {
            int8_t stickLX;
            int8_t stickLY;
            int8_t stickRX;
            int8_t stickRY;
        } stickByte;
    };
} ControllerData_t;
```
### If you modify this struct (e.g., add/remove fields):
1.Edit (`esp/esp_send.ino`) to send the new format.
2.Edit (`src/usb_v1/msg/Joy.msg`) to match the new fields.
3.Edit (`src/usb_v1/src/USB_esp.cpp`) to correctly parse and publish the data.
4.Edit (`src/usb_v1/src/Print_Data.cpp`) to print/handle the new data.
Both ends (ESP32 and ROS2) must remain synchronized.

---
## ROS 2 Nodes
(`USB_esp.cpp`) Reads serial data from ESP32 and publishes it as usb_v1/msg/Joy.
(`Print_Data.cpp`)Subscribes to the topic and prints decoded values using RCLCPP_INFO.

```Example Output
Header: [AA 55],
Move: [1 0 0 1 | set1:0 set2:1],
Attack: [1 0 0 0],
Sticks: [LX:10 LY:-20 RX:5 RY:15]
```

---
## Requirements
ROS 2 Humble or later
ESP32 with Arduino framework
serial library for ROS 2 (C++)
