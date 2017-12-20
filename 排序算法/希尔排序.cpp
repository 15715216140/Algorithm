#include <stdio.h>//希尔排序 //跳跃式插入，算法不稳定 
#define N 10
int main()
{
	int i,j,a[N+1];
	for(i=1; i<=N; i++)
		scanf("%d", &a[i]);//获取数据 
	int incre=N;//设置增量 
	do
	{
	incre=incre/3+1; //增量变化 
	for(i=incre+1; i<=N; i++)
		{
			if(a[i-incre] > a[i]) //对插入排序的改进，先做到基本有序 
			 {
			 	a[0]=a[i]; //a[0]哨兵 
			 	for(j=i-incre; a[j]>a[0]; j-=incre) 
					a[j+incre]=a[j];
				a[j+incre]=a[0]; 
			 }
		}
	}	while(incre>1);
	for(i=1; i<=N; i++)
		printf("%d  ", a[i]);
 } 
