#!/bin/bash

rm -rf build
rm -rf output

mkdir build
cd build
cmake .. && make -j8
