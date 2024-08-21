/*
 Write a C program to find the largest element in an array of
 integers.

#include<stdio.h>

int main() {
   int num[5],i;
   int large = 0;
   
   printf("enter elements\n");
   for(i = 0; i < 5; i++){
       scanf("%d", &num[i]);
       if(num[i]>large){
           large=num[i];
       }
   }
   printf("largest = %d", large);
   
    return 0;
}

*/