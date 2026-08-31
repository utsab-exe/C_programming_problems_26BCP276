//convert hours into minutes

#include <stdio.h>

int main() {
    float hours;
    printf("enter hours: ");
    scanf("%f", &hours);

    float minutes = hours * 60;
    printf("%f hours = %f minutes", hours, minutes);
    return 0;
}