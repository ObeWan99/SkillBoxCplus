cmake_minimum_required(VERSION 3.16.3)

add_executable(main.out 
    main.cpp 
    ram.cpp 
    cpu.cpp 
    disk.cpp 
    gpu.cpp
    kbd.cpp
    ${MY_INCLUDE_DIR}/ram.h 
    ${MY_INCLUDE_DIR}/cpu.h 
    ${MY_INCLUDE_DIR}/disk.h
    ${MY_INCLUDE_DIR}/gpu.h
    ${MY_INCLUDE_DIR}/kbd.h

)

target_include_directories(main.out PUBLIC 
    ${MY_INCLUDE_DIR}
)