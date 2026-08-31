//add, multiply, subtract and divide two numbers

#include <stdio.h>

int main() {
    int num1, num2;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //add
    int sum = num1 + num2;
    printf("sum = %d\n", sum);

    //subtract
    int dif = num1 - num2;
    printf("difference = %d\n", dif);

    //multiply
    int product = num1 * num2;
    printf("product = %d\n", product);

    //divide
    int div = num1 / num2;
    printf("quotient = %d\n", div);

    return 0;
}