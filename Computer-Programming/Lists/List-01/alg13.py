########################################
# Program: alg13.py || list01
# Author: Raissa Cavalcanti
# Description: 2 values - double
########################################

first_number = int(input("Enter the first value: \n"))
second_number = int(input("Enter the second value: \n"))

if first_number > second_number:
    second_number_2x = second_number * 2
    if second_number_2x > first_number:
        print(f"Initially, {first_number} was greater than {second_number}\nBut, when doubled, {second_number_2x} becomes greater than {first_number}")
    else:
        print(f"Even doubling the value of {second_number} ({second_number_2x}), it is still not greater than {first_number}")
else:
    first_number_2x = first_number * 2
    if first_number_2x > second_number:
        print(f"Initially, {second_number} was greater than {first_number}\nBut, when doubled, {first_number_2x} becomes greater than {second_number}")
    else:
        print(f"Even doubling the value of {first_number} ({first_number_2x}), it is still not greater than {second_number}")
