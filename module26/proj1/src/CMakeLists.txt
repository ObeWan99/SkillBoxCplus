cmake_minimum_required(VERSION 3.16.3)

add_executable(main.out
    main.cpp
    track.cpp
    audioPlayer.cpp
    ${MY_INCLUDE_DIR}/audioPlayer.h
    ${MY_INCLUDE_DIR}/audioPlayer.h
)

target_include_directories(main.out PUBLIC 
    ${MY_INCLUDE_DIR}
)