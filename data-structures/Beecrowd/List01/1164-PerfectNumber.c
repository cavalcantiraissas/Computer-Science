/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Perfect Number

write a program that read integer numbers and print a message 
informing if these numbers are perfect or are not perfect.
*/

#include <stdio.h>

int main() {

    int n, x, i, k, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d", &x);

        for (k = 1; k < x; k++) {

            if (x % k == 0) {

                sum += k;

            }
        }

        if (sum == x) {

            printf("%d is perfect\n", x);

        } else {

            printf("%d is not perfect\n", x);

        }

        sum = 0;
    }
}
