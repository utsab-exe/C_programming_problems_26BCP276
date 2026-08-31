// substract two numbers

#include <stdio.h>

int main() {
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int dif = num1 - num2;
    printf("difference = %d", dif);
    return 0;
}