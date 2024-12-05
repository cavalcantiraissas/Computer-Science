/*
 * -----------------------------------------------------------------------------
 * Program:      exercise_3.c
 * Author:       Raissa Cavalcanti
 * Date:         17/10/2024
 * Description:  Area Calculation
 * -----------------------------------------------------------------------------
 */

#include <stdio.h> 

int main(){

    float length, width, area;

    printf("Enter the Length: \n");
    scanf("%f", &length);

    printf("Enter the Width: \n");
    scanf("%f", &width);

    area = (length * width); 
    printf("Area = %.2f meters", area);

    return 0; 

}
