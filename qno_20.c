//calculate area of a triangle

#include <stdio.h>

int main() {
    float height, length;
    printf("enter the height and length of triangle: ");
    scanf("%f %f", &height, &length);

    float area = 0.5 * height * length;
    printf("area = %f", area);
    return 0;
}