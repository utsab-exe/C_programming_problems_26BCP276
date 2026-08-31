//convert rupees into dollars where 1$ = 48 rs

#include <stdio.h>

int main() {
    float rs;
    printf("enter the amount in rupees: ");
    scanf("%f", &rs);

    float dol = rs / 48;
    printf("%f rupees = %f dollars", rs, dol);
    return 0;
}