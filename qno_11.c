//convert grams into kg (1000g = 1kg)

#include <stdio.h>

int main() {
    float grams;
    printf("enter grams : ");
    scanf("%f", &grams);

    float kg = grams / 1000;
    printf("%f grams = %f kgs", grams, kg);
    return 0;
}