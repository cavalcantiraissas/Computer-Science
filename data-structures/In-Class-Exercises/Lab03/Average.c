/*
Federal University of Mato Grosso  
Course: Data Structures 1  
Exercise List in C  
Student: Raissa Cavalcanti  

The C program should register up to 40 students with name, ID (RA), grades 1 and 2,  
calculate their final average, and display the number of students approved  
(average ≥ 6), failed, and the average of all final averages.  
*/

#include <stdio.h>

#define MAX_STUDENTS 40

typedef struct {
    char name[100];
    int ID; 
    float grade1, grade2, finalAverage;
} Student;

int main() {
    int n, passed = 0, failed = 0;
    float totalAverages = 0.0;
    Student students[MAX_STUDENTS];
    
    printf("How many students do you want to register? (Maximum: %d): ", MAX_STUDENTS);
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        getchar();  
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("ID (RA): ");
        scanf("%d", &students[i].ID);
        printf("Grade 1: ");
        scanf("%f", &students[i].grade1);
        printf("Grade 2: ");
        scanf("%f", &students[i].grade2);
        
        students[i].finalAverage = (students[i].grade1 + students[i].grade2) / 2;
        totalAverages += students[i].finalAverage;
        
        if (students[i].finalAverage >= 6.0) {
            passed++;
        } else {
            failed++;
        }
    }
    
    printf("\nClass Summary:\n");
    printf("Total approved: %d\n", passed);
    printf("Total failed: %d\n", failed);
    printf("Average of all final averages: %.2f\n", totalAverages / n);
    
    return 0;
}
