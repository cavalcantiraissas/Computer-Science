/*
 * -----------------------------------------------------------------------------
 * Program:      exercise_2.c
 * Author:       Raissa Cavalcanti
 * Date:         17/10/2024
 * Description:  Commission Calculation 10%
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main(){
    float sales, commission; 

    printf("Enter the number of sales:\n");
    scanf("%f", &sales);

    commission = (sales * 0.10); 
    printf("Total Sales: %.2f \nCommission: $ %.2f", sales, commission);

    return 0; 
}
