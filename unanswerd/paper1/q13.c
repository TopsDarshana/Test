/*
 Write a program in C that reverses a given string without using
 any built-in functions.

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = 0;
    int i;
    char t;
    
   while (str[length] != '\0') {
      length++;
   }
    
    for (i = 0; i < length / 2; i++) {
        t = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = t;
    }
}

int main() {
    char str[100];
   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);
   
    printf("Reversed string: %s\n", str);
    
    return 0;
}
*/