/*
 * -----------------------------------------------------------------------------
 * Program:      exercise_5.c
 * Author:       Raissa Cavalcanti
 * Date:         17/10/2024
 * Description:  Discount Percentage
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main (){

    float old_value, discount, new_value;

    printf("Enter the current value: \n");
    scanf("%f", &old_value);

    printf("What is the discount rate?\nConsider a real value. Example: 15 = 0.15\n");
    scanf("%f", &discount);

    new_value = old_value - (old_value * discount); 

    printf("New value: %.2f", new_value);

    return 0; 

}
