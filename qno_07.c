//convert minutes into hours

#include <stdio.h>

int main() {
    float minutes;
    printf("enter total minutes: ");
    scanf("%f", &minutes);

    float hours = minutes / 60;
    printf("%f minutes = %f hours", minutes, hours);
    return 0;
}