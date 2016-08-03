#include <stdio.h>

 
/* This function returns an array of N even numbers */
int* getEvenNumbers(int N){
    /* Declaration of a static local integer array */
    static int evenNumberArray[100];
    int i, even = 2;
     
    for(i=0; i<N; i++){
        evenNumberArray[i] = even;
        even += 2;
    }
    /* Returning base address of evenNumberArray array*/
    return evenNumberArray;
}
 
