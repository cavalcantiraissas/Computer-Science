########################################
# Program: alg03.py || lista03
# Author: Raissa Cavalcanti
# Description: Vector 10 (vector * 2)
########################################

vector = []
size = 10

# Loop to take 10 inputs from the user and double them immediately
for i in range(size):
    value = int(input(f"Enter the {i+1} value: "))
    vector.append(value * 2)

# Print the final updated vector
print("Final vector with doubled values:", vector)
