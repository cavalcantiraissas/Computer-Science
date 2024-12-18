/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: Engine Failure

*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int cases; 
    int i;  
    int currentRPM = 0, previousRPM = 0;
    bool failure = false; 

    if (scanf("%d", &cases) != 1 || cases <= 0) {
        printf("0\n"); 
        return 0;
    }

    for (i = 1; i <= cases; i++) {
        scanf("%d", &currentRPM);
        
        if (i > 1 && currentRPM < previousRPM && !failure) {
            failure = true; 
            printf("%d\n", i); 
        }
        previousRPM = currentRPM;
    }

    if (!failure) {
        printf("0\n");
    }

    return 0;
}
