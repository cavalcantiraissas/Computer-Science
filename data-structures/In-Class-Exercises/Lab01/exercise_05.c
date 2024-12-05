/*
University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Exercise 05: Division by 3
*/

#include <stdio.h>

int main() {
    int value, quotient, remainder;

    printf("Enter a number: ");
    scanf("%d", &value);

    quotient = value / 3;
    remainder = value % 3;

    printf("The value %d divided by 3:\n", value);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
