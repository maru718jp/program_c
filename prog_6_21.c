/*
prog_6_21.c
*/
#include <stdio.h>
int sum(int x,int y);
//-----main routine------
int main()
{
int a=1,b=2;
printf("%d",sum(3,5));
return;
}
//--- sub routine---
int sum(int x, int y){
    return x+y;
}
