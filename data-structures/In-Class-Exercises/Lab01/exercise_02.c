/*
University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Exercise 02: Read 4 letters and define the largest letter
*/

#include <stdio.h>

int main() {
    char letters[4];
    char smallest, largest;

    printf("Enter 4 letters:\n");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &letters[i]);
    }

    smallest = largest = letters[0];

    for (int i = 1; i < 4; i++) {
        if (letters[i] < smallest) {
            smallest = letters[i];
        }
        if (letters[i] > largest) {
            largest = letters[i];
        }
    }

    printf("Smallest letter: %c\n", smallest);
    printf("Largest letter: %c\n", largest);

    return 0;
}
