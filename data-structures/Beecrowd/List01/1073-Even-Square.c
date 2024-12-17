/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Even Square

Read an integer N. 
Print the square of each one of the even values from 1 to N 
including N if it is the case.
*/

#include <stdio.h>

int main() {
    int number, i;

    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}
