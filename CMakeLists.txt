cmake_minimum_required(VERSION 3.7)
project(uic_error_example)

set(CMAKE_CXX_STANDARD 11)

FIND_PACKAGE(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

add_subdirectory(custom_widgets)