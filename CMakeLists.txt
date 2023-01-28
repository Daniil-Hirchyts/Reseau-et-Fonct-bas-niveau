cmake_minimum_required(VERSION 3.24)
project(Reseau_et_Fonct_bas_niveau C)

set(CMAKE_C_STANDARD 11)

include_directories(OLD/TD2)

add_executable(Reseau_et_Fonct_bas_niveau
        OLD/TD1/main-et-dbl.c)
