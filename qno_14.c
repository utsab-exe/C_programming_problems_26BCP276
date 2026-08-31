// convert celcius into fahrenheit

#include <stdio.h>

int main() {
    float cel;
    printf("enter celcius: ");
    scanf("%f", &cel);

    float frh = ((9.0/5.0)*cel) + 32;
    printf("%f celcius = %f fahrenheit", cel, frh);
    return 0;
}