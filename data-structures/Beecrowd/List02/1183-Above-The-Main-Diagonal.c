/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: Above The Main Diagonal

Read an uppercase character that indicates an operation 
that will be performed in an array M[12][12]. Then, 
calculate and print the sum or average considering only that
 numbers that are above the main diagonal of the array
*/

#include<stdio.h>
#define SIZE 12

int main() {
    int row, column;
    double sum = 0, average = 0, matrix[SIZE][SIZE];
    char operation;

    fflush(stdin);
    scanf("%c", &operation);

    for (row = 0; row < SIZE; row++) {
        for (column = 0; column < SIZE; column++) {
            scanf("%lf", &matrix[row][column]);
        }
    }

    if (operation == 'S') { // Sum of the upper triangular matrix
        for (row = 0; row < SIZE; row++) {
            for (column = 0; column < SIZE; column++) {
                if (row < column) {
                    sum += matrix[row][column];
                }
            }
        }
        printf("%.1lf\n", sum);
    } else if (operation == 'M') { // Average of the upper triangular matrix
        for (row = 0; row < SIZE; row++) {
            for (column = 0; column < SIZE; column++) {
                if (row < column) {
                    sum += matrix[row][column];
                    average = (sum / (((SIZE * SIZE) - SIZE) / 2));
                }
            }
        }
        printf("%.1lf\n", average);
    }

    return 0;
}
