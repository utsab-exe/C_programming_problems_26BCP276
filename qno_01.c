// add two numbers

#include <stdio.h>

int main() {
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("sum = %d\n", sum);
    return 0;
}