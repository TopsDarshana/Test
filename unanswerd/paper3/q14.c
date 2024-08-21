/*
Write a C program to reverse the words in a given sentence without using any library
 functions.

#include <stdio.h>
#include <stdlib.h>

void reverseString(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *word_start = NULL;
    char *temp = str; 
    
    while (*temp) {
        if ((word_start == NULL) && (*temp != ' ' && *temp != '\0')) {
            word_start = temp;
        }
        if (word_start && ((*temp == ' ') || (*temp == '\0'))) {
            reverseString(word_start, temp - 1);
            word_start = NULL;
        }
        temp++;
    }

    reverseString(str, temp - 1);
}

int main() {
    char *str = NULL;
    size_t bufsize = 0;
    ssize_t len;

    printf("Enter a sentence: ");
    len = getline(&str, &bufsize, stdin);

    if (len == -1) {
        perror("Error reading input");
        free(str);
        return 1;
    }

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    reverseWords(str);

    printf("Reversed sentence: %s\n", str);

    free(str);

    return 0;
}

*/