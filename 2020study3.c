/*
2020study3.c
２つの整数A,Bを入力してA、Bの公約数を表示せよ。
＜条件＞
・入力数値が１００００を超える場合は、再入力を行う。
・公倍数１を除く
・出力は１行１０個ずつで８文字間隔にする。
*/

#define MAX 10000
#define A 0
#define B 1
#include <stdio.h>

main(){
int data[2]={0};
int i,j;
int less;
int row;

while(1){
    do{
        printf("Input A & B --->");
        scanf("%d %d",&data[A],&data[B]);
        
    }while( data[A]<0 || data[A]>MAX || data[B]<0 || data[B]>MAX);

    less=data[A];
    less=(data[A]<data[B])? data[A]:data[B];
    row=0;
    for (i=2; i<=less; i++)
    {  
        if( (data[A] % i == 0) && (data[B] % i == 0) )
        {
            printf("%10d ",i);
            row++; 
            row %= 5;
            if (!row) putchar('\n');
       }
    }
    putchar('\n');
}
return 0;
}
