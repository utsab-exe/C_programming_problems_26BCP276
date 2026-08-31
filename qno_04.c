// divide two numbers

#include <stdio.h>

int main() {
    float num1, num2;
    printf("enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    float quotient = num1 / num2;
    printf("quotient = %f", quotient);
    return 0;
}