cmake_minimum_required(VERSION 3.16.3)

project("operation execution" VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

# ${CMAKE_SOURCE_DIR} указывает на корневой каталог проекта, 
# где находится файл CMakeLists.txt
# устанавливаем новую перменную MY_INCLUDE_DIR
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# добавлена поддиректория с дочерним CMakeLists.txt
add_subdirectory(src)

