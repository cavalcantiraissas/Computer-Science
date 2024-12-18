/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: Square Array IV

read an integer number that is the size of a square matrix
(width and height) to be filled as follows: the outer part is 
filled with 0 in the inner part is filled with 1, the main 
diagonal is filled with 2, the secondary diagonal 
is filled with 3 and the central element is 4
*/

#include <stdio.h>

void generateMatrix(unsigned short);

int main() {

  unsigned short size;

  while (scanf("%hd", &size) != EOF) {
    generateMatrix(size);
  }
}

void generateMatrix(unsigned short size) {

  int matrix[size][size];
  unsigned short row, column;

  for (row = 0; row < size; row++)
    for (column = 0; column < size; column++) {
      if (row == column)
        matrix[row][column] = 2;
      else if (row == size - column - 1)
        matrix[row][column] = 3;
      else
        matrix[row][column] = 0;
    }

  unsigned short start = size / 3;
  unsigned short end = size - start;

  for (row = start; row < end; row++)
    for (column = start; column < end; column++)
      matrix[row][column] = 1;

  matrix[size / 2][size / 2] = 4;

  for (row = 0; row < size; row++) {
    for (column = 0; column < size; column++)
      printf("%d", matrix[row][column]);
    printf("\n");
  }
  printf("\n");
}
