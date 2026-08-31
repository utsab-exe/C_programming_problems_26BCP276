//calculate area and perimeter of the rectangle

#include <stdio.h>

int main() {
    float len, breadth;
    printf("enter length and breadth of the rectangle: ");
    scanf("%f%f", &len, &breadth);

    float per = 2 * (len + breadth);
    float area = len * breadth;

    printf("perimeter = %f\narea = %f", per, area);
    return 0;
}