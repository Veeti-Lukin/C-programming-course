cmake_minimum_required(VERSION 3.16)

project(Ohjelmoinnin_tekniikka_C C)

add_subdirectory(
	Part1-Bascis_of_C
	#Part2-Bits_Pointers_Structs
	#Part3-Dynamic-memory_void-ptrs_files
	#Part4-Jumps_signals_time_macros
)



#Mingw or gcc
if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
	add_compile_options(-ansi -pedantic-errors -Wall)
endif()