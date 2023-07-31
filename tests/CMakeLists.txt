

add_executable(Trimmed 
    ./Main.c

    ./Sources/Test_Trim.c
)



target_link_libraries(Trimmed
    TrimLib
    cmocka
)

target_include_directories(Trimmed PUBLIC ../Headers)

