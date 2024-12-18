/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: The Final Frontier

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int maxDigits[2010];

int main(int argc, char **argv)
{

    int row1, col1, col2, col3;
    int i, j, k;

    scanf("%d %d %d %d", &row1, &col1, &col2, &col3);

    int matrix1[row1][col1];
    int matrix2[col1][col2];
    int matrix3[col2][col3];

    for (i = 0; i < row1; ++i)
        for (j = 0; j < col1; ++j)
            scanf("%d", &matrix1[i][j]);
    
    for (i = 0; i < col1; ++i)
        for (j = 0; j < col2; ++j)
            scanf("%d", &matrix2[i][j]);

    int tempResult[row1][col2];
    memset(tempResult, 0, sizeof(tempResult));

    for (i = 0; i < row1; ++i)
        for (j = 0; j < col2; ++j)
            for (k = 0; k < col1; ++k)
                tempResult[i][j] += matrix1[i][k] * matrix2[k][j];

    for (i = 0; i < col2; ++i)
        for (j = 0; j < col3; ++j)
            scanf("%d", &matrix3[i][j]);

    int finalResult[row1][col3];
    memset(finalResult, 0, sizeof(finalResult));

    for (i = 0; i < row1; ++i)
        for (j = 0; j < col3; ++j)
        {
            for (k = 0; k < col2; ++k)
                finalResult[i][j] += tempResult[i][k] * matrix3[k][j];

            if (finalResult[i][j] > maxDigits[j])
                maxDigits[j] = finalResult[i][j];
        }
    
    for (i = 0; i < row1; ++i)
        for (j = 0; j < col3; ++j)
            printf("%*d%c", (int)log10(maxDigits[j] == 0 ? 1 : maxDigits[j]) + 1, finalResult[i][j], j < col3 - 1 ? ' ' : '\n');
    
    return 0;
}
