/*
University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Exercise 01: Read grades and compare with the average grade
*/

#include <stdio.h>

int main(){
    float grade_1, grade_2, grade_3, average; 

    printf("Enter your first grade:\n");
    scanf("%f", &grade_1);

    printf("Enter your second grade:\n");
    scanf("%f", &grade_2);

    printf("Enter your third grade:\n");
    scanf("%f", &grade_3);

    average = ((grade_1 + grade_2 + grade_3) / 3 );

    // Assuming there are no equal grades

    if (average == grade_1){
        printf("The average is equal to your first grade.\n"); 
    }
    else if (average == grade_2){
        printf("The average is equal to your second grade.\n");
    }
    else if (average == grade_3){
        printf("The average is equal to your third grade.\n");
    }
    else{
        printf("Your average is not equal to any of the grades.\n");
    }

    return 0;
}
