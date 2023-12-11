add_executable(Part2_Bits main.c)

add_library(Bits
        bitit.h
        bitit.c
)
target_include_directories(Bits PUBLIC .)

target_link_libraries(Part2_Bits PRIVATE Bits)
