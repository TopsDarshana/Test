/*
Write a C program to count the frequency of each character in a given string.

#include <stdio.h>

int main() {
    char str[100], n; 
    int i, c = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character which you want to count: ");
    scanf(" %c", &n); 
    
    for(i = 0; str[i] != '\0'; i++) {
        if (str[i] == n) {
            c++;
        }
    }

    printf("Total occurrences of '%c': %d\n", n, c);

    return 0;
}

*/