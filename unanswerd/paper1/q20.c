/*
Write a C program that uses a recursive function to find the
Greatest Common Divisor (GCD) of two numbers.

#include <stdio.h>

int gcd(int a, int b) {
    
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    int result = gcd(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

*/