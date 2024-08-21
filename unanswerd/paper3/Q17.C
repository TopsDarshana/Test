/*
 Develop a C program that takes a string as input and removes all white spaces.

 #include <stdio.h>
#include <stdlib.h>

void remove_whitespace(char *str) {
    int i, j = 0;
    
    for (i = 0; str[i] != '\0'; i++) {
       
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char *str = NULL;
    size_t bufsize = 0;
    ssize_t len;

    printf("Enter a string: ");
    len = getline(&str, &bufsize, stdin);

    if (len == -1) {
        perror("Error reading input");
        free(str);
        return 1;
    }

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    remove_whitespace(str);

    printf("String after removing whitespaces: \"%s\"\n", str);

    free(str);

    return 0;
}


*/