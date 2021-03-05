cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(mnist)

set(CMAKE_PREFIX_PATH "/home/tianxin/libtorch/libtorch")
find_package(Torch REQUIRED)

add_executable(mnist mnist.cpp)
target_link_libraries(mnist ${TORCH_LIBRARIES})
set_property(TARGET mnist PROPERTY CXX_STANDARD 14)
