cmake_minimum_required(VERSION 3.16.3)

add_executable(operation.out main.cpp ${MY_INCLUDE_DIR}/instruments.h instruments.cpp)

# добавить директорию включения к цели сборки include
target_include_directories(operation.out PUBLIC ${MY_INCLUDE_DIR})