########################################
# Program: alg11.py || list01
# Author: Raissa Cavalcanti
# Description: Greater and Smaller - 3 values
########################################

first_value = int(input("Enter the first value: \n"))
second_value = int(input("Enter the second value: \n"))
third_value = int(input("Enter the third value:\n"))

## First number is greater
if first_value > second_value and first_value > third_value:
    print(f"{first_value} is greater than {second_value} and {third_value}")
## All numbers are equal
elif first_value == second_value and second_value == third_value:
    print("All three numbers are equal")

## Second number is greater
elif second_value > first_value and second_value > third_value:
    print(f"{second_value} is greater than {first_value} and {third_value}")

## Third number is greater
else:
    print(f"{third_value} is greater than {first_value} and {second_value}")
