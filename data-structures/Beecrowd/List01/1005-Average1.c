/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Average 1

The input file contains 2 floating points'
values with one digit after the decimal point.
*/

#include <stdio.h>

int main() {


    float A, B, MEDIA;

    scanf("%f", &A); 
    scanf("%f", &B);

    MEDIA = (((A*3.5)+(B*7.5))/11);

    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}
