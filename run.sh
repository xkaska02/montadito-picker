#!/usr/bin/env bash

set -e # exit on fail

cmake -B build
cmake --build build

./build/main_cli
