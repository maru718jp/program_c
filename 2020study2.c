/*
①	入力は-999.9～999.9までの数値を入力する。はずれは再入力する。
②	入力に入力した文字を昇順ソートして表示する。
⑤	入力した数値が１０個を超えたら古い入力を１つずつすてる
*/
#include <stdio.h>
double val[10];
double ind, temp;
int count = 0;
int i, flag;
int main()
{
    while (1)
    {
        do
        {
            printf("Input Nnumber -->");
            scanf("%lf", &ind);
        } while (ind < -99.9 || ind > 99.9);
       
        if (count > 9)
        {
            for (i = 0; i < 9; i++)
            {
                val[i] = val[i + 1];
            }
            val[9] = ind;
            count = 9;
        }
        else
        {
            val[count] = ind;
        }
        count++;
          //sort
        do
        {
            flag = 0;
            for (i = 0; i < count - 1; i++)
            {
                if (val[i] > val[i + 1])
                {
                    temp = val[i];
                    val[i] = val[i + 1];
                    val[i + 1] = temp;
                    flag = 1;
                }
            }
        } while (flag == 1);

        for (i = 0; i < count; i++)
            printf("No [%d] %10.1f \n",i+1, val[i]);
    }
    return 0;
}