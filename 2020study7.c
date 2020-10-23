/*
2020study5c
  10進数を入力して2～16進数にに基数変換せよ。繰り返し入力する。

1.　10進数は０－65536の範囲とする、範囲外は再入力する。
2.　を入れたら終了する。

。
=============================================================
Input Decimal  --->100000
ERROR  input again !! 
Input Decimal  --->129
What base number ( B or H ) ?  --->B
Binary Number = 1000001
=============================================================
Input Decimal  --->1023
What base number ( B or H )?  --->H
Hexadecimal  = 3FF
=============================================================
Input Decimal  --->0
*/
#include <stdio.h>
int dec;
int base;
int sel, mod, i, j, k;
const char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int main()
{
    while (1)
    {
        int val[10] = {0};
        do
        {
            printf("Input Decimal --->");
            scanf("%d", &dec);
            if (dec < 0 || dec > 65536)
                printf("ERROR  input again !! \n");
        } while (dec < 0 || dec > 65536);
        if (dec == 0)
            break;
        printf("What base number-->");
        scanf("%d", &base);
        i = 0;
        do
        {
            val[i] = dec % base;
            dec /= base;
            i++;
        } while (dec != 0);
        printf(" Number =");
        for (j = i - 1; j >= 0; j--)
            printf("%c", hex[val[j]]);

        printf("\n\n");
    }
}
