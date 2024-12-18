/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: Peaks and Valleys

*/

#include <stdio.h>

int main() {

    int paisagens, atual, anterior, ehPadrao = 1, pico;

    scanf("%d", &paisagens); // Read the number of landscapes (elements in the sequence).

    // Case 1: Only one element - it's valid by default.
    if (paisagens == 1) {
        scanf("%d", &atual);
        printf("%d\n", ehPadrao);
    } 
    
    // Case 2: Two elements - they must be different for the sequence to alternate.
    else if (paisagens == 2) {
        scanf("%d", &anterior);
        scanf("%d", &atual);
        printf("%d\n", !(atual == anterior));
    } 
    
    // Case 3: More than two elements - check for alternating peaks and valleys.
    else {
        // Read the first two elements.
        scanf("%d", &anterior);
        scanf("%d", &atual);

        paisagens -= 2; // Reduce the count of elements left to process.
        pico = atual > anterior; // Determine if the first transition is a peak.

        do {
            anterior = atual; // Update the previous value.
            scanf("%d", &atual); // Read the next value.
            paisagens--; // Decrease the remaining count.

            if (ehPadrao) { // Only check if the pattern is still valid.
                if (pico) {
                    ehPadrao = atual < anterior; // Ensure it's now a valley.
                    pico = 0; // Next must be a peak.
                } else {
                    ehPadrao = atual > anterior; // Ensure it's now a peak.
                    pico = 1; // Next must be a valley.
                }
            }

        } while (paisagens > 0);

        printf("%d\n", ehPadrao); // Print the result (1 if valid, 0 if not).
    }

    return 0;
}
