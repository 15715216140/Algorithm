#include <stdio.h>//堆排序 
#define N 10
int msortf(int a[]);
int msort(int a[], int a1[], int s, int t);
int msortcore(int a[], int b[], int i, int m,  int n);
int main()
{
	int i,a[10] ={2,4,1,5,5,8,454,46,6,3};
	
	
	msortf(a); 
	for (i=1; i<=N; i++)
	printf("%d ",a[i]);
}
int msortf(int a[])  	{	msort(a,a,1,sizeof(a)/4);	}
int msortcore(int a[], int b[], int i, int m,  int n)
{
	int j,k,l;
	for(j = m +1, k = i; i <= m && j <= n; k++ )
	{
		if(a[i] < a[j])
		b[k] = a[i++] ;
		else
		b[k] = a[j++];
	}
	
	if(i <= m);
		for(l = 0; l <= m - i; l++)
		b[k+l] = a[i+l];
	if(j <= n);
		for(l = 0; l <= n - j; l++)
		b[k+l] = a[j+l];
}
int msort(int a[], int a1[], int s, int t)
{
	int m;
	int a2[sizeof(a)/4+1];
	if(s == t)
	a1[s] = a[s];
	else
	{
		m = (s + t) / 2;
		msort(a,a2,s,m);
		msort(a,a2,m+1,t);
		msortcore(a2,a1,s,m,t);			//两个子序列合并函数 
	}
}

