// multiply two numbers

#include <stdio.h>

int main() {
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int product = num1 * num2;
    printf("product = %d", product);
    return 0;
}