// calculate area and perimeter of a square

#include<stdio.h>

int main() {
    float len;
    printf("enter the length of square: ");
    scanf("%f", &len);

    float perimeter = 4 * len;
    float area = len * len;

    printf("perimeter = %f\narea = %f", perimeter, area);
    return 0;
}