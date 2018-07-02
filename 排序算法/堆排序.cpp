#include <stdio.h>//堆排序 
#define N 10
int heapbig(int *a, int s, int m);
int main()
{
	int i,a[N+1] ;
	for (i=1; i<=N; i++)
	scanf("%d",&a[i]);
	for(i=N/2; i>0; i--)//构造大顶堆。从下向上，for保证最上为最大。 
		heapbig(a,i,N);
	for(i=N; i>1; i--)
 		{
 			a[0] = a[1];  a[1] = a[i]; a[i] = a[0];
 			heapbig(a,1,i-1);//（调整新堆）为最大顶堆交换后基本有序，自上而下也下沉小的数，不会打乱自下而上的基本排序 
		 }
	for (i=1; i<=N; i++)
	printf("%d ",a[i]);
} 
 int heapbig(int *a, int s, int m)//s某一个根节点 ，m总个数 
 	{
 		int temp,j;			//temp储存最大数 
 		temp = a[s];
 		for (j=2*s; j<=m;j*=2)	//所在三角堆，把最大数升到根节点 （2*s=j）为左子节点 
 		{
 			if(j<m && a[j]<a[j+1])
 				j++;			//大数标记 
 			if(temp>=a[j])
 				break;
 			a[s] = a[j];
 			s = j;			//被换掉的堆定寻找新位置，需要标记 
		}
		a[s] = temp;		//确定位置后的放置 
	 }
 
 
