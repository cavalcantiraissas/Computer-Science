/*
Federal University of Mato Grosso
Course: Data Structures 1
Exercise List on C
Student: Raissa Cavalcanti

Beecrowd: List 01: Bhaskara

Read 3 floating-point numbers.
After, print the roots of bhaskara’s formula. 
If it's impossible to calculate the roots because a division by zero or a square root of a negative number,
presents the message “Impossivel calcular”.

*/

#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c, r1, r2, x;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    x = b * b - 4 * a * c; 
    if (x > 0 && a != 0) {
        x = pow(x, 0.5); 
        
        r1 = (-b + x) / (2 * a); // First root
        r2 = (-b - x) / (2 * a); // Second root

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else {
        printf("Impossible to calculate\n");
    }
    
    return 0;
}
