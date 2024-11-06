## COMPILING::
  ```
  cmake .. \
    -DCMAKE_SYSTEM_NAME=Android \
    -DCMAKE_SYSTEM_VERSION=21 \
    -DCMAKE_ANDROID_ARCH_ABI=arm64-v8a \
    -DCMAKE_ANDROID_NDK=/home/evilai/android-ndk-r27c-linux/android-ndk-r27c/ \
    -DCMAKE_BUILD_TYPE=Debug
  ```


## RESOURCES::
  https://cmake.org/cmake/help/latest/manual/cmake-toolchains.7.html
  
  https://cmake.org/cmake/help/latest/guide/importing-exporting/index.html#id3

  saiv_vision_barcode_recognizer_process

## REMOTE DEBUG::
  gdbserver :5039 /data/local/tmp/Barcode

  adb forward tcp:5039 tcp:5039



