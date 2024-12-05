########################################
# Program: alg10.py || list01
# Author: Raissa Cavalcanti
# Description: Greater and Smaller
########################################

first_value = int(input("Enter the first value: \n"))
second_value = int(input("Enter the second value: \n"))

if first_value > second_value:
    print(f"{first_value} is greater than {second_value}")
elif first_value == second_value:
    print(f"{first_value} is equal to {second_value}")
else:
    print(f"{second_value} is greater than {first_value}")
