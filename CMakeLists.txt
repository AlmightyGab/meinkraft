cmake_minimum_required(VERSION 3.15)
project(meinkraft)

find_package(ftxui REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} ftxui::ftxui)
