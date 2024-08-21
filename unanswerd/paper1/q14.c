/*
 What is a recursive function? Write a C program to calculate the
 factorial of a number using recursion.


#include<stdio.h>

int fib(int n);

int main() {
   printf("%d", fib(6));
    return 0;
}

int fib(int n) {
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm1 + fibnm2;
    printf("fib of %d is %d\n", n, fibn);
    return fibn;
    
}

*/