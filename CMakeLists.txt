cmake_minimum_required(VERSION 3.16)
project(pic)

set(CMAKE_CXX_STANDARD 11)
add_executable(pic main.cpp showpic.h showpic.cpp )

set(OpenCV_DIR "D:\\opencv\\opencv\\mingw-build")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)
# "C_Test"与你工程的命名相关，注意和原来CMakeList.txt中的声明一致

target_link_libraries(pic ${OpenCV_LIBS})
