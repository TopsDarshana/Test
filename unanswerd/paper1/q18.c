/*
Write a C program to implement a simple calculator using
switch-case statements that performs addition, subtraction,
multiplication, and division.

#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
  
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    
    printf("Enter second numbers: ");
    scanf("%d", &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
                result = num1 / num2;
                printf("Result: %d\n", result);
              break;
        default:
            printf("Error: Invalid method.\n");
            break;
    }

    return 0;
}

*/