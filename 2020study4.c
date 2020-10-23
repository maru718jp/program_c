/*
2020study4.c

周波数frq、表示時間time、位相pheseを入力して大きさ１のsin波形をかけ.

*/
#include <stdio.h>
#include <math.h>
#define CYCLE 50
#define DIV 20
double frq;
double time;
double phase;
double sdata;
int main()
{
    int i, j;
    int data;
    while(1)
    {
        int grf[DIV][CYCLE] = {0};

        //do
        //{
        printf("Input frequency --->");
        scanf("%lf", &frq);
        printf("Input times --->");
        scanf("%lf", &time);
        printf("Input phase --->");
        scanf("%lf", &phase);
        //}while()

        //---------------------------------
        for (i = 0; i < CYCLE; i++)
        {
            sdata = (2.0 * 3.14 * frq * i * time / CYCLE) + (3.14 * phase / 180.0);
            //printf("sdata=%0.2f    ",sdata);
            data = (int)(sin(sdata) * 10);
            //data = (int)(sin(sdata) * 10);
            //printf("i=%d  data=%d    \n",i, data);
            grf[DIV / 2 - data][i] = 1;
            //getchar();
        }
        //-------------------------------
        for (i = 0; i < DIV; i++)
        {
            for (j = 0; j < CYCLE; j++)
            {
                //printf("%d",grf[i][j]);
                (grf[i][j] == 0) ? printf(" ") : printf("*");
            }
            printf("\n");
        }
    }
}