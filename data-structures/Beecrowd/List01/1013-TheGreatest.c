/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: The Greatest

Make a program that reads 3 integer values and 
present the greatest one followed by the message "eh o maior". 
Use the following formula:

(a+b + abs(a-b))/2

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c, x, maior;

    scanf("%d %d %d " , &a, &b, &c);

    x = ((a+b +abs(a-b))/2);
    maior = (x+c+abs(x-c))/2;

    printf("%d eh o maior\n", maior); 

    return 0;
} 
