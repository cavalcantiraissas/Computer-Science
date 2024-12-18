/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: Fibonacci Array

Write a program that reads a number and print 
the Fibonacci number corresponding to this read number.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double num, phi_pos, phi_neg, fib_result;
    int j, cases, term;

    scanf("%d", &cases);

    for (j = 0; j < cases; j++) {
        scanf("%d", &term);
        num = term;
        phi_pos = (1 + sqrt(5)) / 2.0;
        phi_neg = (1 - sqrt(5)) / 2.0;

        fib_result = (pow(phi_pos, num) - pow(phi_neg, num)) / sqrt(5);

        printf("Fib(%d) = %.0lf\n", term, fib_result);
    }

    return 0;
}
