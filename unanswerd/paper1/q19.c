/*
 Develop a C program that reverses the digits of an integer number
 entered by the user

#include<stdio.h>

int main() {
    int number;
    int reversed = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number != 0) {
        int digit = number % 10; 
        reversed = reversed * 10 + digit; 
        number = number / 10; 
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
*/