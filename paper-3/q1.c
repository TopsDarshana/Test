/*
 Write a C program to check whether a number is prime or not.

 #include <stdio.h>

int main() {
    int number, i, prime = 1; 

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        prime = 0; 
    } else {
        
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                prime = 0; 
                break; 
            }
        }
    }

    if (prime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

 */