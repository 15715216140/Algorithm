#include <stdio.h>
#include <iostream>
#include <algorithm> 
#define N 10
int Qsort(int a[], in
 low, int high) ;//���� 
int pivotfx(int a[], int low, int high);//���ź��ĺ���  
int main()
{
	int i,j; 
	int a[N+1];
	for(i=1;i<=10;i++)
	scanf("%d",&a[i]);
	int low = 1, high = sizeof(a)/4 - 1;//������ʼ������a[0] ���������� ��� 
	Qsort(a,low,high);
	for(i=1;i<=10;i++)
	printf("%d  ",a[i]);
	
} 
 int Qsort(int a[], int low, int high) 					//���ŵݹ麯�� 
 {
 	int pivot;
 	
 	if(low < high)//ֱ��ÿ�������н�Ϊһ���� 
 	{
 		pivot = pivotfx(a,low,high);
 		Qsort(a, pivot + 1, high);
 		Qsort(a, low,pivot -1 );
 	
	 }
 }
 int pivotfx(int a[], int low, int high)				//��ߺ��ĺ��� 
 {
 	int pivotkey;
	pivotkey = a[low];//��� 
 	while(low < high)
 	{
 		while(low < high && a[high] >= pivotkey) 		// 
 		high--;											// �Ӻ����ң�ÿ����һ�Σ�high-���һ�£�ֱ�����ֱȱ��С����
		swap(a[high] , a[low]) ;//������ǰ�� 
 		while(low < high && a[low] <= pivotkey) 		//,������֮�󣬱�߼�����ǰ��Ƚϣ�low++��ǣ�ֱ�����ֱȱ�ߴ󣬽��� 
 		low++;
 		swap(a[high] , a[low]) ;//������ǰ�� ; 
 		
	 }
	 return low; 										//��󷵻ر�ߵ�λ�� 
 }
