#include <stdio.h>//ϣ������ //��Ծʽ���룬�㷨���ȶ� 
#define N 10
int main()
{
	int i,j,a[N+1];
	for(i=1; i<=N; i++)
		scanf("%d", &a[i]);//��ȡ���� 
	int incre=N;//�������� 
	do
	{
	incre=incre/3+1; //�����仯 
	for(i=incre+1; i<=N; i++)
		{
			if(a[i-incre] > a[i]) //�Բ�������ĸĽ����������������� 
			 {
			 	a[0]=a[i]; //a[0]�ڱ� 
			 	for(j=i-incre; a[j]>a[0]; j-=incre) 
					a[j+incre]=a[j];
				a[j+incre]=a[0]; 
			 }
		}
	}	while(incre>1);
	for(i=1; i<=N; i++)
		printf("%d  ", a[i]);
 } 
