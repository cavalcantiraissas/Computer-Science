/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Salary

Write a program that reads an employee's number,
his/her worked hours number in a month and the amount he received per hour.
Print the employee's number and salary that he/she will receive at end of the month,
with two decimal places.

*/

#include <stdio.h>

int main(){
    int number;
    float amount, salary, hours;

    scanf("%d", &number);
    scanf("%f", &hours);
    scanf("%f", &amount);

    salary = (hours * amount);

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0; 
}
