#include <stdio.h>//������ 
#define N 10
int heapbig(int *a, int s, int m);
int main()
{
	int i,a[N+1] ;
	for (i=1; i<=N; i++)
	scanf("%d",&a[i]);
	for(i=N/2; i>0; i--)//����󶥶ѡ��������ϣ�for��֤����Ϊ��� 
		heapbig(a,i,N);
	for(i=N; i>1; i--)
 		{
 			a[0] = a[1];  a[1] = a[i]; a[i] = a[0];
 			heapbig(a,1,i-1);//�������¶ѣ�Ϊ��󶥶ѽ���������������϶���Ҳ�³�С����������������¶��ϵĻ������� 
		 }
	for (i=1; i<=N; i++)
	printf("%d ",a[i]);
} 
 int heapbig(int *a, int s, int m)//sĳһ�����ڵ� ��m�ܸ��� 
 	{
 		int temp,j;			//temp��������� 
 		temp = a[s];
 		for (j=2*s; j<=m;j*=2)	//�������Ƕѣ���������������ڵ� ��2*s=j��Ϊ���ӽڵ� 
 		{
 			if(j<m && a[j]<a[j+1])
 				j++;			//������� 
 			if(temp>=a[j])
 				break;
 			a[s] = a[j];
 			s = j;			//�������ĶѶ�Ѱ����λ�ã���Ҫ��� 
		}
		a[s] = temp;		//ȷ��λ�ú�ķ��� 
	 }
 
 
