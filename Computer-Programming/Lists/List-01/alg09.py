########################################
# Program: alg08.py || list01
# Author: Raissa Cavalcanti
# Description: Divisible by 2, 3, 5, 10
########################################

number = int(input("Enter a number:\n"))

div_2 = number % 2
div_3 = number % 3
div_5 = number % 5
div_10 = number % 10

if div_2 == 0 and div_3 == 0 and div_10 == 0:
    print(f"{number} is divisible by 2, 3, and 10")
elif div_3 == 0 and div_5 == 0 and div_10 == 0:
    print(f"{number} is divisible by 3, 5, and 10")
elif div_2 == 0 and div_10 == 0:
    print(f"{number} is divisible by 2 and 10")
elif div_5 == 0 and div_10 == 0:
    print(f"{number} is divisible by 5 and 10")
elif div_2 == 0 and div_3 == 0:
    print(f"{number} is divisible by 2 and 3")
elif div_3 == 0 and div_5 == 0:
    print(f"{number} is divisible by 3 and 5")
elif div_2 == 0:
    print(f"{number} is divisible by 2")
elif div_3 == 0:
    print(f"{number} is divisible by 3")
elif div_5 == 0:
    print(f"{number} is divisible by 5")
elif div_10 == 0:
    print(f"{number} is divisible by 10")
else:
    print("The chosen number is not divisible by 2, 3, 5, or 10")
