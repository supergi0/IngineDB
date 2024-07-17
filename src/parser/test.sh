#!/bin/bash

cd ./tests

for dir in */; do
    cd "$dir"
    for file in *.sh; do
        if [ -f "$file" ]; then
            bash "$file"
        fi
    done
    cd ..
done

cd ..