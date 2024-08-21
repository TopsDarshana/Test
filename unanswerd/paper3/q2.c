/*
Implement a C program that reads a string from the user and counts the number of vowels and
consonants in it

#include <stdio.h>

int main() {
    char word[100];
    int i;
    int vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%s", word);  

   for (i = 0; word[i] != '\0'; i++) {
        char ch = word[i]; 
    
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                if (ch >= 'a' && ch <= 'z') {
                    consonants++;
                }
                break;
        }
   }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}


*/