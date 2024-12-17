/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Quadrant

Write a program to read the coordinates (X, Y) of an indeterminate number of points 
in Cartesian system. For each point write the quadrant to which it belongs. 
The program finish when at least one of two coordinates is NULL 
(in this situation without writing any message).

*/

#include <stdio.h>

int main() {
    int x, y;

    while (x != 0 || y != 0) {
        x = 1;
        y = 1;
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > 0 && y > 0) {
            printf("first\n");
        } else if (x < 0 && y > 0) {
            printf("second\n");
        } else if (x < 0 && y < 0) {
            printf("third\n");
        } else if (x > 0 && y < 0) {
            printf("fourth\n");
        } else if (x == 0 || y == 0) {
            return 0;
        }
    }

    return 0;
}
