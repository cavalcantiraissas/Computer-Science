/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Even Between five Numbers

Make a program that reads five integer values. 
Count how many of these values ​​are even and  print this information

*/

#include <stdio.h>

int main() {

    int i, count = 0, number;

    for (i = 0; i < 5; i++) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            count++;
        }
    }

    printf("%d even values\n", count);

    return 0;
}
