/*
Explain how typedef is used in C with an example.


typedef - In C programming, typedef is a keyword used to create a new name (alias) for an existing type. This can make code more readable and easier to manage, especially when dealing with complex data types.
- typedef can simplify the declaration of complex types, such as pointers to functions or structures.
- It can make the code more understandable by providing meaningful names for types.
- If a type needs to be changed, using typedef allows you to change the type in one place rather than throughout the code.

example - 
#include <stdio.h>

typedef unsigned int uint;

int main() {
    uint age = 25;
    printf("Age: %u\n", age);
    return 0;
}
*/