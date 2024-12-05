########################################
#Program: alg06.py || list02
# Author: Raissa Cavalcanti
# Description: Successive Addition
########################################

first_value = int(input("Enter the First value:\n"))
second_value = int(input("Enter the Second Value:\n"))
sum_value = first_value
i = 1

while (i <= second_value):
    print(f"{first_value} x {i} = {sum_value}")
    sum_value += first_value
    i = i + 1
