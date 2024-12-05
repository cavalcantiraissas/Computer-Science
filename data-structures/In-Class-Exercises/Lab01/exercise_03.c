/*
University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Exercise 03: Read values and create a sequence
*/

#include <stdio.h>

int main() {
    int value1, value2;

    printf("Enter the first value: ");
    scanf("%d", &value1);

    printf("Enter the second value: ");
    scanf("%d", &value2);

    if (value1 < value2) {
        printf("Numbers between %d and %d:\n", value1, value2);
        for (int i = value1 + 1; i < value2; i++) {
            printf("%d ", i);
        }
    } else if (value1 > value2) {
        printf("Numbers between %d and %d:\n", value2, value1);
        for (int i = value2 + 1; i < value1; i++) {
            printf("%d ", i);
        }
    } else {
        printf("The values are equal.\n");
    }

    printf("\n");

    return 0;
}
