#include <stdio.h>

int main() {

    float celsius, farenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    farenheit = (celsius * 9 / 5) + 32;

    printf("%.2f celsius = %.2f farenheit\n", celsius, farenheit);

    return 0;
}