//convert dollars into rupees where 1$ = 48Rs

#include <stdio.h>

int main() {
    float dol;
    printf("enter the amount in dollars: ");
    scanf("%f", &dol);

    float rs = dol * 48;
    printf("%f dollars = %f rupees", dol, rs);
    return 0;
}