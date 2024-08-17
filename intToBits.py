# Python program to demonstrate
# command line arguments

import sys

def decimalToBit(arg):

    
    bit = bin(int(arg))

    # The binary string is printed
    print("The binary string is", bit)
    print("Formatted:", bit[2:])
if __name__ == "__main__":
    # Name of Python scrip:
    print("\nYou are running:", sys.argv[0])
 
    if len(sys.argv) > 2:
        raise ValueError('More than 1 input string.')

    else:
        print("Number in decimal:",sys.argv[1])
        decimalToBit(sys.argv[1])

