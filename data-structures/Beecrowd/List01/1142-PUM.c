/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: PUM

Write a program that reads an integer N. 
This N is the number of output lines printed by this program.
*/

#include <stdio.h>

int main() {
    int n, i, number = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (; number <= 4 * n; number++) {
            if ((number % 4) == 0) {
                printf("PUM\n");
            } else {
                printf("%d ", number);
            }
        }
    }

    return 0;
}
