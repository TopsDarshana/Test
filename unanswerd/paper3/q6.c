/*
Create a C program that calculates the sum and average of elements in an array.

#include <stdio.h>

int main() {
    int n[5];
    float sum, average;
    float array[5];

    printf("Enter %d elements:\n", 5);
    for (int i = 0; i < 5; i++) {
        scanf("%f", &array[i]);
        sum += array[i]; 
    }

    average = sum / 5;
    printf("Sum of the elements: %.2f\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}
*/