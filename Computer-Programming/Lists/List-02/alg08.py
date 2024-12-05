########################################
#Program: alg08.py || list02
# Author: Raissa Cavalcanti
# Description: Sequence + Average
#########################################

i = 1
sum = 0

numbers = int(input("How many numbers will be read?: "))

while (i <= numbers):
    print(f"Enter the {i} value: ")
    value = int(input())
    sum += value
    i += 1

average = (sum / numbers)
print(f"Average = {average}")
