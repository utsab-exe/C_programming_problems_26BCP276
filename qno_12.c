//convert kgs into grams

#include<stdio.h>

int main() {
    float kgs;
    printf("enter kgs: ");
    scanf("%f", &kgs);

    float grams = kgs * 1000;
    printf("%f kgs = %f grams", kgs, grams);
    return 0;
}