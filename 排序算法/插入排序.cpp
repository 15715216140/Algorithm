#include <stdio.h>//小到大排序 
int main()
#define N 10
{
	int a[N+1]={1 ,2, 7, 8 ,9, 5 ,4 ,6 ,2 ,5, 4 };  //a[0]做哨兵 
	int i,j,t;
	
	for(j=0; j<=10; j++)
	
	for(i=0; i<N-j; i++) {  // 需N-1趟 
		for(i=1; i<=N-j; i++){//每趟 N-j趟 
		t=a[i] - a[i+1];
			if(t)//相邻两个数比较，大的下沉，下一趟，下沉次大的，循环至倒数第一大的（最小的） 
			{ a[0] = a[i]; a[i] = a[i+1]; a[i+1] = a[0]; }
		}
	} 
	for(i=1; i<=10; i++)
	printf("%d\n",a[i]);
 } 