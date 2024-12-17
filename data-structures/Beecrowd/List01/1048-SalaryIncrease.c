/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Salary Increase

Read the employee's salary, calculate and print the new employee's salary,
as well the money earned and the increase percentual obtained by the employee, 
with corresponding messages.
*/

#include <stdio.h>

int main() {
    float salary;

    scanf("%f", &salary);

    if (salary > 0 && salary <= 400.0)
        printf("New salary: %.2f\nSalary increase: %.2f\nIn percentage: 15 %%\n", (salary + (salary * 0.15)), (salary * 0.15));
    else if (salary <= 800.0)
        printf("New salary: %.2f\nSalary increase: %.2f\nIn percentage: 12 %%\n", (salary + (salary * 0.12)), (salary * 0.12));
    else if (salary <= 1200.0)
        printf("New salary: %.2f\nSalary increase: %.2f\nIn percentage: 10 %%\n", (salary + (salary * 0.10)), (salary * 0.10));
    else if (salary <= 2000.0)
        printf("New salary: %.2f\nSalary increase: %.2f\nIn percentage: 7 %%\n", (salary + (salary * 0.07)), (salary * 0.07));
    else
        printf("New salary: %.2f\nSalary increase: %.2f\nIn percentage: 4 %%\n", (salary + (salary * 0.04)), (salary * 0.04));
    
    return 0;
}
