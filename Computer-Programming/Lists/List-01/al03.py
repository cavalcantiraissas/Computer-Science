########################################
# Program: alg03.py || list01
# Author: Raissa Cavalcanti
# Description: Real Number - Square and Square Root
########################################

import math

number = float(input("Enter a number:\n"))
print(f"You chose the number: {number}\n")

square = number * number
print(f"Square of {number} = {square}\n")

square_root = math.sqrt(number)
print(f"Square root of {number} = {square_root}")
