/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Difference

Read four integer values named A, B, C and D. 
Calculate and print the difference of product A and B by the product of C
and D (A * B - C * D).
*/

#include <stdio.h> 

int main (){

    int A, B , C, D, DIFERENCA;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DIFERENCA = (A * B - C * D);

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}
