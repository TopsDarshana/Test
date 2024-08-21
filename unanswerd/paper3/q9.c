/*
Implement a C program that multiplies two matrices.

#include<stdio.h>

int main() {
    
    int matrix1[2][2] = {
       {1, 1},
       {1, 1}
    };
    int matrix2[2][2] = {
        {2, 2}, 
        {2, 2} 
    };
    
    int len_of_row = sizeof(matrix1)/sizeof(matrix1[0]);
    int len_of_col = (sizeof(matrix1[0])/sizeof(matrix1[0][0]));
   
    printf("Matrix-1:\n");
    for(int row = 0; row<len_of_row; row++){
        for(int col = 0; col<len_of_col; col++){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    
    printf("Matrix-2:\n");
    for(int row = 0; row<len_of_row; row++){
        for(int col = 0; col<len_of_col; col++){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    printf("Matrix-1 * Matrix-2:\n");
    for(int row = 0; row<len_of_row; row++){
        for(int col = 0; col<len_of_col; col++){
            printf("%d ",matrix1[row][col] * matrix2[row][col]);
        }
        printf("\n");
    }
    

    return 0;
}

*/