#!/bin/bash

generate_unique_random() {
    local count=$1
    local min=$2
    local max=$3
    
    if [ $((max - min + 1)) -lt $count ]; then
        echo "Error: Range is not large enough" >&2
        return 1
    fi
    
    seq $min $max | shuf -n $count
}

ARG=$(generate_unique_random 500 -40 4400)
./push_swap $ARG