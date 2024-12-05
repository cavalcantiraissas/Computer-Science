########################################
# Program: alg06.py || list01
# Author: Raissa Cavalcanti
# Description: Real number: square root or square
########################################

import math

number = float(input("Enter a number: \n"))

if number >= 0:
    square_root = math.sqrt(number)
    print(f"Square root of {number} = {square_root}")
else:
    square = number * number
    print(f"Square of {number} = {square}")
