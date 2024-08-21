/*
 Create a C program that reads an array of integers from the user and removes duplicate
 elements from the array.

 #include <stdio.h>

int main() {
    int a[7] = {7, 5, 8, 7, 5, 4};
    int i, j, k, n = 6; 
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
               
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--; 
                j--; 
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

*/