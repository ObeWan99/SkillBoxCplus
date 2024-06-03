cmake_minimum_required(VERSION 3.16.3)

add_executable(main.out
    main.cpp
    window.cpp
    monitor.cpp
    ${MY_INCLUDE_DIR}/window.h
    ${MY_INCLUDE_DIR}/monitor.h
)

target_include_directories(main.out PUBLIC 
    ${MY_INCLUDE_DIR}
)