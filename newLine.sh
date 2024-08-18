#!/bin/bash

# Check if a file name is provided as an argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

# Read the file and create a new line after every occurrence of '!='
sed 's/!=/&\n/g' "$1"
