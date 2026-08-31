//calculate the average of three subjects along with their total.

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    int sum = num1 + num2 + num3;
    int avg = (num1 + num2 + num3) / 3;

    printf("sum = %d average = %d", sum, avg);
    return 0;
}