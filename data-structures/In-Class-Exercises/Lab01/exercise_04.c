/*
University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Exercise 04: Successive Multiplication Table
*/

#include <stdio.h>

int main() {
    int value1, value2, result = 0;

    printf("Enter the first value to be multiplied: ");
    scanf("%d", &value1);

    printf("Enter the second value to multiply: ");
    scanf("%d", &value2);

    for (int i = 0; i < value2; i++) {
        result += value1;
    }
    printf("Result of %d multiplied by %d is: %d\n", value1, value2, result);

    return 0;
}
