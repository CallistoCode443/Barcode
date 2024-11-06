cmake_minimum_required(VERSION 3.28)

project(Barcode)

set(SOURCE_EXE main.cpp)

set(CMAKE_CXX_STANDARD 17)

add_library(libsaiv_barcode SHARED IMPORTED)
set_property(TARGET libsaiv_barcode PROPERTY IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/libsaiv_barcode.so")

include_directories(${CMAKE_SOURCE_DIR})

add_executable(Barcode ${SOURCE_EXE})

target_link_libraries(Barcode PUBLIC libsaiv_barcode)