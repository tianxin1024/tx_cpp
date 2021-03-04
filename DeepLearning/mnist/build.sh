#!/bin/bash
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=/home/tianxin/libtorch/libtorch ..
make

