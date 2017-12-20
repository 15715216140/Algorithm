#include <stdio.h>
#include <iostream>
#include <algorithm> 
#define N 10
int Qsort(int a[], in
 low, int high) ;//快排 
int pivotfx(int a[], int low, int high);//快排核心函数  
int main()
{
	int i,j; 
	int a[N+1];
	for(i=1;i<=10;i++)
	scanf("%d",&a[i]);
	int low = 1, high = sizeof(a)/4 - 1;//数组起始结束，a[0] 用作交换用 标兵 
	Qsort(a,low,high);
	for(i=1;i<=10;i++)
	printf("%d  ",a[i]);
	
} 
 int Qsort(int a[], int low, int high) 					//快排递归函数 
 {
 	int pivot;
 	
 	if(low < high)//直到每个子序列仅为一个数 
 	{
 		pivot = pivotfx(a,low,high);
 		Qsort(a, pivot + 1, high);
 		Qsort(a, low,pivot -1 );
 	
	 }
 }
 int pivotfx(int a[], int low, int high)				//标尺核心函数 
 {
 	int pivotkey;
	pivotkey = a[low];//标尺 
 	while(low < high)
 	{
 		while(low < high && a[high] >= pivotkey) 		// 
 		high--;											// 从后面找（每查找一次，high-标记一下）直到发现比标尺小的数
		swap(a[high] , a[low]) ;//交换到前面 
 		while(low < high && a[low] <= pivotkey) 		//,交换过之后，标尺继续与前面比较，low++标记，直到发现比标尺大，交换 
 		low++;
 		swap(a[high] , a[low]) ;//交换到前面 ; 
 		
	 }
	 return low; 										//最后返回标尺的位置 
 }
