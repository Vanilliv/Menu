cmake_minimum_required(VERSION 3.28)
project(projektKoncowy C)

set(CMAKE_C_STANDARD 11)

add_executable(projektKoncowy main.c laczenie_znakow.c d2b.c logarytmy.c struktury.c)

target_link_libraries(projektKoncowy m)