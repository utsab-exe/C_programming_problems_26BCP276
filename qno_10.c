//convert dollars into pounds where 1$ = 48 rs and 1 pound = 70rs

#include <stdio.h>

int main() {
    float dol;
    printf("enter the amount in dollars: ");
    scanf("%f", &dol);

    //1$ = 48rs
    float rs = dol * 48;
    
    //1 pound = 70 rs
    float pnds = rs / 70;

    printf("%f dollars = %f pounds", dol, pnds);
    return 0;
}