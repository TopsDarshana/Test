/*
Create a function in C that checks if a given string is a
palindrome.

#include<stdio.h>
#include<string.h>

int main() {
    char str[20];
    int i, len;
    int count = 0;
    printf("enter string \n");
    scanf("%s", str);
    len = strlen(str);
    
    for(i = 0; i < len; i++){
        if(str[i] != str[len-i-1]){
            count = 1;
            break;
        }
    }
    if(count == 0){
        printf("palindrome string", str);
    }
        else{
            printf("not a palindrome string", str);
       
    }
    return 0;
}
*/