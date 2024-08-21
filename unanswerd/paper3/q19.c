/*
 Write a C program to find the length of a string without using any built-in functions.

#include <stdio.h>

int string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[1000]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = string_length(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    int length = string_length(str);
    printf("The length of the string is: %d\n", length);
    return 0;
}


*/