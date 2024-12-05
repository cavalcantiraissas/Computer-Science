########################################
# Program: alg04.py || lista03
# Author: Raissa Cavalcanti
# Description: Vector 10 (double the values)
########################################

vector_1 = []  # User input values
vector_2 = []  # Doubled values

size = 10  # Size
i = 0  # Initialization

for i in range(size):
    value = int(input(f"Enter the {i+1} value: "))
    vector_1.append(value)
    vector_2.append(value * 2)
    print("Vector 1:", vector_1)
    print("Vector 2 (doubled values):", vector_2)
