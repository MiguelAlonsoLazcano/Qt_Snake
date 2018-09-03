cmake_minimum_required(VERSION 3.12)
project(Qt_Snake)

set(CMAKE_CXX_STANDARD 14)

# QT Cmake binary
set(CMAKE_PREFIX_PATH "/opt/Qt/5.11.2/gcc_64/lib/cmake")
set(CMAKE_AUTOMOC ON) # Q_OBJECT
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


# Include Qt libraries
find_package(Qt5Core REQUIRED)        # QT += gui core
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Quick REQUIRED)

# Find includes in 'inc' directory
include_directories(inc)

set(SOURCE_FILES main.cpp)

add_executable(Qt_Snake ${SOURCE_FILES})
target_link_libraries(Qt_Snake Qt5::Widgets Qt5::Core)
