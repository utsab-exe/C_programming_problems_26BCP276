// calculate the area of a circle

#include <stdio.h>

int main() {
    float radius;
    printf("enter the radius: ");
    scanf("%f", &radius);

    float area = (22.0/7.0) * radius * radius;
    printf("area = %f", area);
    return 0;
}