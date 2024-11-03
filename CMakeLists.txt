cmake_minimum_required(VERSION 3.28)

project(Barcode)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB foo.h)

set(CMAKE_ANDROID_ARCH_ABI arm64-v8a)
set(CMAKE_ANDROID_NDK /home/evilai/android-ndk-r27c-linux/)