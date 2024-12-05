#include <stdio.h>

int main (){

    float old_salary, adjustment, new_salary;

    printf("Enter your current salary: \n");
    scanf("%f", &old_salary);

    printf("What is your adjustment rate?\nConsider a real value. Example: 15 = 0.15\n");
    scanf("%f", &adjustment);

    new_salary = (old_salary * adjustment) + old_salary; 

    printf("New salary: %.2f", new_salary);

    return 0; 

}
