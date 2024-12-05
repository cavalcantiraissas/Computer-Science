/*
 * -----------------------------------------------------------------------------
 * Program:      exercise_1.c
 * Author:       Raissa Cavalcanti
 * Date:         17/10/2024
 * Description:  Double of a Real Number
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main(){

    float number, double_value;

    printf("Enter the number you want to double: \n"); 
    scanf("%f", &number);
    
    double_value = (number * 2);

    printf("You entered the number: %.1f \nIts double is: %.1f ", number, double_value);

    return 0; 
}
