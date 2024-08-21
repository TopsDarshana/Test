/*
Explain what a pointer to a pointer is in C and give an example.

In C programming, a pointer to a pointer is a variable that stores the address of another pointer. This concept extends the idea of pointers, where a pointer holds the address of a data variable. Here’s a detailed explanation and an example to illustrate how pointers to pointers work.

example - 
#include <stdio.h>

int main() {
    int a = 10;      
    int *p = &a;     
    int **pp = &p;   

    printf("Value of a: %d\n", **pp);        
   
    return 0;
}

*/