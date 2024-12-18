/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: 2179 Batuke

*/

#include <stdio.h>
#include <math.h>

int main() {
    int N, F, C;
    scanf("%d", &N); 
    scanf("%d", &F); 
    scanf("%d", &C);  

    int numbering = 1;
    int map[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            map[i][j] = numbering;
            numbering++;
        }
    }

    int path[N * N];
    int visitedCells[N * N];
    int totalCells = N * N;
    int expand = 0;
    int step = 1;
    char direction = 'e';  
    int banknotes = 1;
    int counter = 0;

    path[0] = map[F][C];
    visitedCells[0] = path[0];

    while (counter < totalCells - 1) {
        if (direction == 'e') {
            for (int i = 1; i <= step; i++) {
                if (C + 1 < N && C + 1 >= 0 && F >= 0 && F < N) {
                    if (map[F][C + 1] != visitedCells[counter]) {
                        visitedCells[counter + 1] = map[F][C + 1];
                        path[counter + 1] = map[F][C + 1];
                        counter++;
                    }
                }
                if (counter < totalCells - 1) {
                    banknotes++;
                }
                C++;
            }
            direction = 's';
        } else if (direction == 's') {
            for (int i = 1; i <= step; i++) {
                if (F + 1 < N && F + 1 >= 0 && C >= 0 && C < N) {
                    if (map[F + 1][C] != visitedCells[counter]) {
                        visitedCells[counter + 1] = map[F + 1][C];
                        path[counter + 1] = map[F + 1][C];
                        counter++;
                    }
                }
                if (counter < totalCells - 1) {
                    banknotes++;
                }
                F++;
            }
            direction = 'o';
        } else if (direction == 'o') {
            for (int i = 1; i <= step; i++) {
                if (C - 1 >= 0 && C - 1 < N && F >= 0 && F < N) {
                    if (map[F][C - 1] != visitedCells[counter]) {
                        visitedCells[counter + 1] = map[F][C - 1];
                        path[counter + 1] = map[F][C - 1];
                        counter++;
                    }
                }
                if (counter < totalCells - 1) {
                    banknotes++;
                }
                C--;
            }
            direction = 'n';
        } else if (direction == 'n') {
            for (int i = 1; i <= step; i++) {
                if (F - 1 < N && F - 1 >= 0 && C >= 0 && C < N) {
                    if (map[F - 1][C] != visitedCells[counter]) {
                        visitedCells[counter + 1] = map[F - 1][C];
                        path[counter + 1] = map[F - 1][C];
                        counter++;
                    }
                }
                if (counter < totalCells - 1) {
                    banknotes++;
                }
                F--;
            }
            direction = 'e';
        }

        expand++;

        if (expand == 2) {
            step++;
            expand = 0;
        }
    }

    for (int i = 0; i < totalCells; i++) {
        if (i == totalCells - 1) {
            printf("%d", path[i]);  
        } else {
            printf("%d ", path[i]);
        }
    }
    printf("\n%d\n", banknotes + 1);

    return 0;
}
