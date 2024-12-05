########################################
# Program: alg08.py || list01
# Author: Raissa Cavalcanti
# Description: Even or Odd
########################################

number = int(input("Enter a number: "))

remainder = number % 2

if remainder == 0:
    print(f"{number} = even")
else:
    print(f"{number} = odd")
