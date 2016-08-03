#include<stdio.h>
#include"take.c"
int main()
{

char* callback=take();
for(int i=0; i>4;i++){
printf("data main :%c",callback[i]);
}
}
