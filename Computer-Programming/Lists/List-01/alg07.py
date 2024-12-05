########################################
# Program: alg07.py || list01
# Author: Raissa Cavalcanti
# Description: Color Classification
########################################

number = int(input("Enter a number: "))

if number < 0:
    print("White")
elif 0 <= number <= 100:
    print("Green")
elif 100 < number <= 1000:
    print("Blue")
else:
    print("Red")
