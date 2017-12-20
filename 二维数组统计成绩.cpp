#include <stdio.h>
#define m 50
#define n 9
int main()
{
	int a[m][n], sum[m],aver[n];
	int i=m, j=m; 
	printf("请输入学生成绩\n");
	for(i=0;i<m;i++)
		for(i=0;i<n;i++)
		scanf("%d",&a[i][j]);
	for(i=0;i<m;i++) //计算行，学生总分、平均分 
	{
		sum[i]=0;
		for(j=0;j<n;j++)
		sum[i] +=a[i][j];
		printf("学生总分%d\n",sum[i]);
		printf("学生平均分%d\n",sum[i]/n);
	}
	for(j=0;j<m;j++) //计算列，学科平均分 
	{
		aver[j]=0;
		for(i=0;i<n;i++)
		{
			aver[j]+=a[i][j];
		}
		printf("学科平均分%d\n",aver[j]/n);
	}		
 } 	
