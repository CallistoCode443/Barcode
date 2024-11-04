cmake cmake .. \
  -DCMAKE_SYSTEM_NAME=Android \
  -DCMAKE_SYSTEM_VERSION=21 \
  -DCMAKE_ANDROID_ARCH_ABI=arm64-v8a \
  -DCMAKE_ANDROID_NDK=/home/evilai/android-ndk-r27c-linux/android-ndk-r27c/ \
  -DCMAKE_BUILD_TYPE=Debug 