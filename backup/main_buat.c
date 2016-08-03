#include<stdio.h>
#include "buat.c"
int main(void)
{
int i;
char* callback=buat();
for(i=0;i>30;i++)
{
printf("%c",callback[i]);
}
return 0;
}
