cmake_minimum_required(VERSION 3.12)
project(Qt_Snake)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH "/opt/Qt/5.11.2/gcc_64/lib/cmake")


set(SOURCE_FILES main.cpp)

find_package(Qt5Widgets REQUIRED)
add_executable(Qt_Snake ${SOURCE_FILES})
target_link_libraries(Qt_Snake Qt5::Widgets)