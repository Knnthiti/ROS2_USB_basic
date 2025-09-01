cmake_minimum_required(VERSION 3.8) 
project(usb_v1)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang") 
  add_compile_options(-Wall -Wextra -Wpedantic) 
endif() 

#install package other
find_package(ament_cmake REQUIRED) 
find_package(rclcpp REQUIRED) 
find_package(serial REQUIRED)
find_package(geometry_msgs REQUIRED) 
find_package(rosidl_default_generators REQUIRED)
find_package(usb_v1 REQUIRED)

#build executable "talker" for run "src/USB_esp.cpp"
add_executable(talker src/USB_esp.cpp) 
ament_target_dependencies(talker rclcpp serial usb_v1)

#build executable "listener" for run "src/Print_Data.cpp"
add_executable(listener src/Print_Data.cpp) 
ament_target_dependencies(listener rclcpp serial usb_v1)

#install executable becasse "ros2 run usb_v1 talker" , "ros2 run usb_v1 listener"
install(TARGETS 
  talker
  listener
  DESTINATION lib/${PROJECT_NAME} 
)

#install msg package
rosidl_generate_interfaces(${PROJECT_NAME} 
  "msg/Joy.msg" 
  DEPENDENCIES geometry_msgs
) 

#Allow other packages to continue using
ament_export_dependencies(rosidl_default_runtime) 

ament_package()
