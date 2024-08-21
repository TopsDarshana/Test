/*
Write a C program to find the smallest element in an array of integers.

#include <stdio.h>

int main() {
    int array[5]; 
    printf("enter arrey");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    int smallest = array[0];
    
    for (int i = 1; i < 5; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}

*/