#include <stdio.h>
#define N 10
int main()
{
	int i,j; 
	int a[N+1];
	for(i=1;i<=10;i++)
	scanf("%d",&a[i]);
	for(i=2;i<=N;i++)
	{
		if(a[i]<a[i-1]) //如果带插入的数较大，需要向前插入 
		{
			a[0]=a[i]; //哨兵 
			for(j = i-1;a[j]>a[0];j--) // 与前一个比较，如果前一个较大
			a[j+1] = a[j];  //则后移一位,留出空待插 
			a[j+1]=a[0];  //直到空满足插入要求 
		}
	}
	for(i=1;i<=10;i++)
	printf("%d  ",a[i]);
 } 
