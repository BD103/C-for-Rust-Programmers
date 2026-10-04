#!/bin/bash
set -euxo pipefail

if [[ "$#" -eq 1 ]]; then
    mkdir -p target

    rustc --edition=2024 -o target/$1-rust $1/main.rs
    clang -Wall -o target/$1-c $1/main.c
else
    echo Please specify which program to compile.
    exit 1
fi
