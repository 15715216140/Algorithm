#include <stdio.h>
#define N 10
int Qsort(int a[], int low, int high) ;//���� 
int pivotfx(int a[], int low, int high);//���ź��ĺ���  
int insert(int a[], int low, int high) ;	//�������� 
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
 	
 	if(high - low > 7)								//�����ÿ��ţ����ٸ�Ϊ�������� 
 	{
	while (low < high)
		 {
		 	pivot = pivotfx(a,low,high);
 			Qsort(a, pivot + 1, high);
		  } 
 		low = pivot + 1;
	 }
 	else
 	insert(a,low,high);
 }
 int pivotfx(int a[], int low, int high)				//��ߺ��ĺ��� 
 {
 	int pivotkey;
 	{
 		int m = (low + high) / 2;
		if(a[low]>a[high])
		a[0] = a[high]; a[high] = a[low]; a[low] = a[0] ; 
		if(a[m]>a[high])
		a[0] = a[high]; a[high] = a[m]; a[m] = a[0] ;
		if(a[m] > a[high])
		a[0] = a[m]; a[m] = a[low]; a[low] = a[0] ;
 		
	 }				//����ȡ�У��Ż���� �����ŵ��Ż��� 
	pivotkey = a[low];//��� 
 	while(low < high)
 	{
 		while(low < high && a[high] >= pivotkey) 		// 
 		high--;											// �Ӻ����ң�ÿ����һ�Σ�high-���һ�£�ֱ�����ֱȱ��С����
 		a[0] = a[high]; a[high] = a[low]; a[low] = a[0] ;//������ǰ�� 
 		while(low < high && a[low] <= pivotkey) 		//,������֮�󣬱�߼�����ǰ��Ƚϣ�low++��ǣ�ֱ�����ֱȱ�ߴ󣬽��� 
 		low++;
 		a[0] = a[high]; a[high] = a[low]; a[low] = a[0]; 
 		
	 }
	 return low; 										//��󷵻ر�ߵ�λ�� 
 }
 int insert(int a[], int low, int high) 
 {
 	int aa,i,j;
 		for(i=low + 1;i<=high;i++)
		{
			if(a[i]<a[i-1]) //�������������ϴ���Ҫ��ǰ���� 
				{
					aa=a[i]; //�ڱ� 
					for(j = i-1;a[j]>a[0];j--) // ��ǰһ���Ƚϣ����ǰһ���ϴ�
					a[j+1] = a[j];  //�����һλ,�����մ��� 
					a[j+1]=aa;  //ֱ�����������Ҫ�� 
				}
		}
 }
 	
