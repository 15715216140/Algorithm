#include <stdio.h>
#define N 10
int Qsort(int a[], int low, int high) ;//快排 
int pivotfx(int a[], int low, int high);//快排核心函数  
int insert(int a[], int low, int high) ;	//插入排序 
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
 	
 	if(high - low > 7)								//数多用快排，数少改为插入排序 
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
 int pivotfx(int a[], int low, int high)				//标尺核心函数 
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
 		
	 }				//三数取中，优化标尺 （快排的优化） 
	pivotkey = a[low];//标尺 
 	while(low < high)
 	{
 		while(low < high && a[high] >= pivotkey) 		// 
 		high--;											// 从后面找（每查找一次，high-标记一下）直到发现比标尺小的数
 		a[0] = a[high]; a[high] = a[low]; a[low] = a[0] ;//交换到前面 
 		while(low < high && a[low] <= pivotkey) 		//,交换过之后，标尺继续与前面比较，low++标记，直到发现比标尺大，交换 
 		low++;
 		a[0] = a[high]; a[high] = a[low]; a[low] = a[0]; 
 		
	 }
	 return low; 										//最后返回标尺的位置 
 }
 int insert(int a[], int low, int high) 
 {
 	int aa,i,j;
 		for(i=low + 1;i<=high;i++)
		{
			if(a[i]<a[i-1]) //如果带插入的数较大，需要向前插入 
				{
					aa=a[i]; //哨兵 
					for(j = i-1;a[j]>a[0];j--) // 与前一个比较，如果前一个较大
					a[j+1] = a[j];  //则后移一位,留出空待插 
					a[j+1]=aa;  //直到空满足插入要求 
				}
		}
 }
 	
