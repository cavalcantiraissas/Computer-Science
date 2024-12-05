########################################
#Program: alg07.py || list02
# Author: Raissa Cavalcanti
# Description: Multiplication Table
########################################

number = int(input("Multiplication table of the number: "))

i = 1
result = number

while (i <= 10):
    print(f"{number} x {i} = {result}")
    result += number
    i += 1
