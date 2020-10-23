/* 
2020study1.c
２つ歯車をかみ合わせて使用するとき、主の歯数をA、従の歯数をBとして入力して、
主が１００００回、回転するときに同じ歯同士がかみ合う回数とかみ合う率を求める
プログラムを作れ。A Bに０を入れると終了する。
*/
#include <stdio.h>
//#include <Windows.h>
main (){
#define  PATTERN 10000
while(1){
  int ga;
  int gb;
  int gacount=1;
  int gbcount=1;
  int lap_count=0;
  long i;

  printf("------------------------------\n");
  printf("gear A B =");
  scanf("%d %d",&ga,&gb);
  if (ga==0)  break;
  for (i=1;i <=PATTERN*ga ;i++)
  {
    gacount= ((i % ga)+1);// printf("gacount=%d",gacount);        
    gbcount= ((i % gb)+1);// printf("         gbcount=%d\n",gbcount);     
    //Sleep(500);
    if (gacount==1 && gbcount==1)
    {
      lap_count++;     
    }    
  }
  printf("lap times=%d /%d \n",lap_count,PATTERN);
  printf("lap %=%.2f%%\n\n",(double)lap_count/PATTERN*100);
} 
printf("end");
return 0;
}