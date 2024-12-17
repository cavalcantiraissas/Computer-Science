/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Game Time

Read the start time and end time of a game,
in hours and minutes (initial hour, initial minute, final hour, final minute).
Then print the duration of the game, knowing that the game can begin in a day 
and finish in another day. Obs.: With a maximum game time of 24 hours and 
the minimum game time of 1 minute.

*/

#include <stdio.h>
int main() {
    int startHour, startMinute, endHour, endMinute;
    int duration;

    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    duration = ((endHour * 60) + endMinute) - ((startHour * 60) + startMinute);

    if (duration <= 0) 
        duration += 24 * 60;

    printf("THE GAME LASTED %d HOUR(S) AND %d MINUTE(S)\n", duration / 60, duration % 60);

    return 0;
}
