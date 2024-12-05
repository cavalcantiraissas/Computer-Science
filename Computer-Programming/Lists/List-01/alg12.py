########################################
# Program: alg12.py || list01
# Author: Raissa Cavalcanti
# Description: 3 Values - middle value
########################################

first_value = int(input("Enter the first value: \n"))
second_value = int(input("Enter the second value: \n"))
third_value = int(input("Enter the third value:\n"))

## "A" as the middle value
if (second_value > first_value and first_value > third_value) or (third_value > first_value and first_value > second_value):
    print(f"{first_value} is the middle value between {second_value} and {third_value}")
elif (first_value > second_value and second_value > third_value) or (third_value > second_value and second_value > first_value): 
    print(f"{second_value} is the middle value between {first_value} and {third_value}")
else:
    print(f"{third_value} is the middle value between {second_value} and {first_value}")
