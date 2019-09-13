cmake_minimum_required(VERSION 3.14)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp Widget.h LinuxButton.h LinuxMenu.h WindowsButton.h WindowsMenu.h Factory.h LinuxFactory.h WindowsFactory.h Client.h)