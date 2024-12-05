########################################
#Program: alg10.py || list02
# Author: Raissa Cavalcanti
# Description: Sequence + Double or Half of Values
########################################

i = 1
new_number = 0 

number = int(input("Enter a value: "))

while (i <= number):
    if (i % 3 == 0 or i == 1):
        new_number = (i * 2)
        print(new_number)
    else:
        new_number = (i / 2)
        print(new_number)
    i += 1
