/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 02: 2310 Volleyball

*/

#include <stdio.h>
#include <stdlib.h>  // For malloc and free

typedef struct {
    char name[100];
    unsigned short serveAttempts;
    unsigned short blockAttempts;
    unsigned short attackAttempts;
    unsigned short successfulServes;
    unsigned short successfulBlocks;
    unsigned short successfulAttacks;
} Player;

int main() {
    unsigned totalServeAttempts = 0, totalBlockAttempts = 0, totalAttackAttempts = 0;
    unsigned totalSuccessfulServes = 0, totalSuccessfulBlocks = 0, totalSuccessfulAttacks = 0;
    unsigned short numPlayers;
    unsigned short i;

    if (scanf("%hu", &numPlayers) != 1 || numPlayers == 0) {
        printf("Invalid number of players.\n");
        return 1;
    }

    Player *team = (Player *)malloc(numPlayers * sizeof(Player));
    if (team == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < numPlayers; i++) {
        scanf(" %s", team[i].name);
        scanf("%hu %hu %hu", 
              &team[i].serveAttempts, 
              &team[i].blockAttempts, 
              &team[i].attackAttempts);
        scanf("%hu %hu %hu", 
              &team[i].successfulServes, 
              &team[i].successfulBlocks, 
              &team[i].successfulAttacks);
    }

    for (i = 0; i < numPlayers; i++) {
        totalServeAttempts += team[i].serveAttempts;
        totalBlockAttempts += team[i].blockAttempts;
        totalAttackAttempts += team[i].attackAttempts;
        totalSuccessfulServes += team[i].successfulServes;
        totalSuccessfulBlocks += team[i].successfulBlocks;
        totalSuccessfulAttacks += team[i].successfulAttacks;
    }

    if (totalServeAttempts > 0) {
        printf("Serve Points: %.2f%%\n", (totalSuccessfulServes * 100.0) / totalServeAttempts);
    } else {
        printf("Serve Points: 0.00%%\n");
    }

    if (totalBlockAttempts > 0) {
        printf("Block Points: %.2f%%\n", (totalSuccessfulBlocks * 100.0) / totalBlockAttempts);
    } else {
        printf("Block Points: 0.00%%\n");
    }

    if (totalAttackAttempts > 0) {
        printf("Attack Points: %.2f%%\n", (totalSuccessfulAttacks * 100.0) / totalAttackAttempts);
    } else {
        printf("Attack Points: 0.00%%\n");
    }

    // Free allocated memory
    free(team);

    return 0;
}
