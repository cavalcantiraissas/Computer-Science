/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Extremely Basic

Read 2 variables, named A and B, and compute the sum of these two variables, 
assigning the result to the variable X. Print X as shown below.
*/

#include <stdio.h>

int main() {

    int A, B, X;

    scanf("%d", &A);
    scanf("%d", &B);

    X = (A + B);

    printf("X = %d\n", X);

    return 0;
}
