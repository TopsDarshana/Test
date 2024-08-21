/*
Implement a C program that converts temperature from Celsius to Fahrenheit using the
formula F = (C × 9/5) + 32

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Read the temperature in Celsius from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
*/