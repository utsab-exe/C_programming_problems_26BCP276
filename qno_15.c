//convert fahreheit into celcius

#include<stdio.h>

int main() {
    float fhr;
    printf("enter fahrenheit: ");
    scanf("%f", &fhr);

    float cel = (5.0/9.0) * (fhr - 32);
    printf("%f fahreheit = %f celcius", fhr, cel);
    return 0;
}