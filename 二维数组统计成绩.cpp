#include <stdio.h>
#define m 50
#define n 9
int main()
{
	int a[m][n], sum[m],aver[n];
	int i=m, j=m; 
	printf("������ѧ���ɼ�\n");
	for(i=0;i<m;i++)
		for(i=0;i<n;i++)
		scanf("%d",&a[i][j]);
	for(i=0;i<m;i++) //�����У�ѧ���ܷ֡�ƽ���� 
	{
		sum[i]=0;
		for(j=0;j<n;j++)
		sum[i] +=a[i][j];
		printf("ѧ���ܷ�%d\n",sum[i]);
		printf("ѧ��ƽ����%d\n",sum[i]/n);
	}
	for(j=0;j<m;j++) //�����У�ѧ��ƽ���� 
	{
		aver[j]=0;
		for(i=0;i<n;i++)
		{
			aver[j]+=a[i][j];
		}
		printf("ѧ��ƽ����%d\n",aver[j]/n);
	}		
 } 	
