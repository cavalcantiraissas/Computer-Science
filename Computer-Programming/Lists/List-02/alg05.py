########################################
#Program: alg05.py || list02
# Author: Raissa Cavalcanti
# Description: Limit + Increment
########################################

limit = int(input("Enter a Limit Value:\n"))
increment = int(input("Enter the Increment Value:"))
i = 0

if (limit > increment):
    while(i < limit):
        print(i)
        i += increment

elif (limit < increment):
    print("Increment is greater than the limit. Please try again.")
