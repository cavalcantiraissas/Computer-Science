/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: Counting in Chinese
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int column;
    int value;
} Entry;

int compare(const void *a, const void *b) {
    Entry *e1 = (Entry *)a;
    Entry *e2 = (Entry *)b;

    if (e1->row != e2->row) {
        return e1->row - e2->row;
    }
    return e1->column - e2->column;
}

int main() {
    int testCases, size, nonZeroElements;
    int matrixNumber, row, column, value;

    scanf("%d", &testCases); 

    for (int t = 0; t < testCases; t++) {
        if (t > 0) {
            printf("\n");
        }

        scanf("%d %d", &size, &nonZeroElements); 

        int **matrix = (int **)malloc(size * sizeof(int *));
        for (int i = 0; i < size; i++) {
            matrix[i] = (int *)calloc(size, sizeof(int)); 
        }

        for (int i = 0; i < nonZeroElements; i++) {
            scanf("%d %d %d %d", &matrixNumber, &row, &column, &value);
            matrix[row - 1][column - 1] += value;
        }

        Entry *entries = (Entry *)malloc(size * size * sizeof(Entry));
        int totalEntries = 0;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] != 0) {
                    entries[totalEntries].row = i + 1;
                    entries[totalEntries].column = j + 1;
                    entries[totalEntries].value = matrix[i][j];
                    totalEntries++;
                }
            }
        }
      
        qsort(entries, totalEntries, sizeof(Entry), compare);

        for (int i = 0; i < totalEntries; i++) {
            printf("%d %d %d\n", entries[i].row, entries[i].column, entries[i].value);
        }

        for (int i = 0; i < size; i++) {
            free(matrix[i]);
        }
        free(matrix);
        free(entries);
    }

    return 0;
}
