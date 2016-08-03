#include<stdio.h>
#include <string.h>
#include<malloc.h>
char*gua(int count)
{
char *ret=malloc(count);
if (!ret)
return NULL;
for(int i=0; i<count; ++i)
ret[i]=i;
return ret;
}

