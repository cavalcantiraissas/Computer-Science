/*
 * -----------------------------------------------------------------------------
 * Program:      exercise_6.c
 * Author:       Raissa Cavalcanti
 * Date:         17/10/2024
 * Description:  Dollar Exchange Rate
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>

int main (){

    float reais, exchange_rate, dollars;

    printf("Enter the value in reais: \n");
    scanf("%f", &reais);

    printf("What is the current exchange rate of the dollar?\n");
    scanf("%f", &exchange_rate);

    dollars = (reais / exchange_rate); 

    printf("At the current exchange rate, you would have: %.2f Dollars.", dollars);

    return 0; 

}
