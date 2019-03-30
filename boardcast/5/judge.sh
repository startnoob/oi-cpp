#!/bin/bash
while true; do
    ./data > data.in
    ./2_ac <data.in >std.out
    ./2 <data.in >code.out
    if diff std.out code.out; then
        printf "AC\n"
    else
        printf "Wa\n"
        exit 0
    fi
done
