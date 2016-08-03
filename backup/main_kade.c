#include<stdio.h>
#include "kade.c"
int main(){
   int *array, counter;
   array = getEvenNumbers(10);
   printf("Even Numbers\n");
   for(counter=0; counter<10; counter++){
       printf("%d\n", array[counter]);
   }
    
   
   return 0;
} 
