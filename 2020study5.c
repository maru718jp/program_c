/*
2020study5.c
１  10進数を入力してそれを２進数と１６進数に変換せよ。繰り返し入力する。
２　10進数は０－65536の範囲、範囲外は再入力する。
３　変換する基数を2（２進数）、16（１６進数）で入力する。
    NULLの場合は終了する。
４　10進数に０を入れたら終了する。
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
        //dec2bin
        if (base == 2)
        {
            i = 0;
            do
            {
                val[i] = dec % 2;
                dec /= 2;
                i++;
            } while (dec != 0);

            printf("Binary number =");
            for (j = i - 1; j >= 0; j--)
                (val[j] == 0) ? putchar('0') : putchar('1');
        }
        //
        if (base == 16)
        {
            i = 0;
            do
            {
                val[i] = dec % 16;
                dec /= 16;
                i++;
            } while (dec != 0);
            printf("Hexadecimal number =");
            for (j = i - 1; j >= 0; j--)
                printf("%c", hex[val[j]]);
        }
        if (base == 0)
            break;
        printf("\n\n");
    }
}
