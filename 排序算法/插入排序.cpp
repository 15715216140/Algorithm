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
		if(a[i]<a[i-1]) //�������������ϴ���Ҫ��ǰ���� 
		{
			a[0]=a[i]; //�ڱ� 
			for(j = i-1;a[j]>a[0];j--) // ��ǰһ���Ƚϣ����ǰһ���ϴ�
			a[j+1] = a[j];  //�����һλ,�����մ��� 
			a[j+1]=a[0];  //ֱ�����������Ҫ�� 
		}
	}
	for(i=1;i<=10;i++)
	printf("%d  ",a[i]);
 } 
