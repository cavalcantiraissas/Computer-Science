/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: Square Matrix II

Write a program that read an integer number N (0 ≤ N ≤ 100)
 that correspont to the order of a Bidimentional 
 array of integers,and build the Array
*/

#include <stdio.h> 

int main() {

    unsigned short int size, row, column;

    while (1) {

        scanf("%hd", &size);
        short matrix[size][size];

        if (size == 0)
            return 0;

        // Fill the matrix based on position rules
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
                if (row == column)
                    matrix[row][column] = 1; // Diagonal elements
                if (row < column)
                    matrix[row][column] = column - row + 1; // Upper triangle
                if (row > column)
                    matrix[row][column] = row - column + 1; // Lower triangle
            }
        }

        // Print the matrix
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
                if (column == 0)
                    printf("%3hd", matrix[row][column]);
                else
                    printf(" %3hd", matrix[row][column]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
