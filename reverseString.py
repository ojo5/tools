# Python program to demonstrate
# command line arguments

import sys

def reverse_string(arg):
    print("String reversed:",arg[::-1]) 

if __name__ == "__main__":
    # Name of Python scrip:
    print("\nYou are running:", sys.argv[0])
 
    if len(sys.argv) > 2:
        raise ValueError('More than 1 input string.')

    else:
        print("Original string:",sys.argv[1])
        reverse_string(sys.argv[1])

