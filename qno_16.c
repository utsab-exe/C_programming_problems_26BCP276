//calculate interest where I = PRN/100;

#include <stdio.h>

int main() {
    float interest, principal, rate, time_in_yrs;

    printf("enter the principal: ");
    scanf("%f", &principal);

    printf("enter the rate: ");
    scanf("%f", &rate);

    printf("enter the time in years: ");
    scanf("%f", &time_in_yrs);

    interest = (principal * rate * time_in_yrs)/100;
    printf("interest = %f", interest);
    return 0;
}