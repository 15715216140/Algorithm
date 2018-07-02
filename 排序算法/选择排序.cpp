#include <stdio.h>
#define N 10 
int main() 
{
    int a[N+1],k;  //a[0]做哨兵 
    int i, j;
    for ( i = 1; i <= N; i ++ )   scanf("%d", &a[i]); 
  
     for ( i = 1; i < N; i ++ )   //循环N-1次，每次找到最小的， 
      {
    k=i;
    for ( j = i + 1; j < N; j ++)
        if ( a[k] >a[j] )
    k=j;                          //记录下最小数的位置 （下标） 
    if(k!=i)
     { a[0] = a[i]; a[i] = a[k]; a[k] =a[0]; } //交换到前面 
}
for( i = 0; i < 10; i ++)  printf("%4d",a[i]); //显示排序后的结果
}
