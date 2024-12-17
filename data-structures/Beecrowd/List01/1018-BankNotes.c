/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Banknotes

In this problem you have to read an integer value and calculate the smallest 
possible number of banknotes in which the value may be decomposed. 
The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. 
Print the read value and the list of banknotes.

*/


#include <stdio.h>
#include <math.h>

int main() {
    int N, hundred, fifty, fifty1, twenty, twenty1, ten, ten1, five, five1, two, two1, one, one1;

    scanf("%d", &N);
    printf("%d\n", N);

    hundred = N / 100;
    fifty = N % 100;
    fifty1 = fifty / 50;
    twenty = fifty % 50;
    twenty1 = twenty / 20;
    ten = twenty % 20;
    ten1 = ten / 10;
    five = ten % 10;
    five1 = five / 5;
    two = five % 5;
    two1 = two / 2;
    one = two % 2;
    one1 = one / 1;

    printf("%d bill(s) of $ 100.00\n", hundred);
    printf("%d bill(s) of $ 50.00\n", fifty1);
    printf("%d bill(s) of $ 20.00\n", twenty1);
    printf("%d bill(s) of $ 10.00\n", ten1);
    printf("%d bill(s) of $ 5.00\n", five1);
    printf("%d bill(s) of $ 2.00\n", two1);
    printf("%d bill(s) of $ 1.00\n", one1);

    return 0;
}
