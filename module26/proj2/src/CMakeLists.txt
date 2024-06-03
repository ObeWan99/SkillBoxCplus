cmake_minimum_required(VERSION 3.16.3)

add_executable(main.out
    main.cpp
    addressBook.cpp
    contact.cpp
    phone.cpp
    ${MY_INCLUDE_DIR}/addressBook.h
    ${MY_INCLUDE_DIR}/contact.h
    ${MY_INCLUDE_DIR}/phone.h
)

target_include_directories(main.out PUBLIC 
    ${MY_INCLUDE_DIR}
)