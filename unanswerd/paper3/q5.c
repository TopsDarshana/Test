/*
Write a C program to merge two sorted arrays into a single sorted array.

#include <stdio.h>

int main() {
    int arry1[5];
    int arry2[5];
    int array[10];
    int i, j, k;

    printf("Enter elements for the first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arry1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arry2[i]);
    }

    i = 0; 
    j = 0; 
    k = 0; 
    while (i < 5 && j < 5) {
        if (arry1[i] < arry2[j]) {
            array[k++] = arry1[i++];
        } else {
            array[k++] = arry2[j++];
        }
    }

    while (i < 5) {
        array[k++] = arry1[i++];
    }

    while (j < 5) {
        array[k++] = arry2[j++];
    }

    printf("Merged array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

*/