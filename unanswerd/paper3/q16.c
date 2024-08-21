/*
Write a C program to convert a given string to lowercase without using built-in functions.


#include <stdio.h>
#include <string.h> 

void lower_case(char arr[], int len) {
    for (int pos = 0; pos < len; pos++) {
        if ((arr[pos] >= 'A') && (arr[pos] <= 'Z')) {
            printf("%c", arr[pos] + 32);
        } else {
            printf("%c", arr[pos]);
        }
    }
    printf("\n"); 
}

int main() {
    char name[100]; 
    printf("Enter name: ");
    scanf("%99[^\n]", name); 
    int len = strlen(name);
    lower_case(name, len);

    return 0;
}

*/