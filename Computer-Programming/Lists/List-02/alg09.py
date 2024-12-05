########################################
#Program: alg09.py || list02
# Author: Raissa Cavalcanti
# Description: Sequence + Comparison with Reference
########################################

i = 1

reference = int(input("Enter the reference value: "))

value_1 = int(input("Enter the first value to be added: "))
value_2 = int(input("Enter the second value to be added: "))
value_3 = int(input("Enter the third value to be added: "))

sum_values = (value_1 + value_3 + value_2)

if (sum_values > reference):
    while (i <= sum_values):
        print(i)
        i += 1
else:
    while (i <= reference):
        print(i)
        i += 1
