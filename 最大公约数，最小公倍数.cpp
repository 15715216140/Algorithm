#include <stdio.h>
int main()
{
	int a,b,t,i,m,n;
	printf("������������\n");
	scanf("%d%d",&a,&b);
	if(a==b)
   {
   	printf("���Լ��Ϊ%d\n",a);
    printf("��С������Ϊ%d\n",a);
	
	} 
	else
	{
		if(a>b)
		{
			t=a;
			a=b;
			b=t;
		}//��С�ķ���ǰ�� 
		for(i=a;i<b;i--)
		{
			m=b%i; 
			n=a%i;
			if(n+m==0)
			break;
		}//��˳��ȡ��Լ���������ȱ�ȡ����Ȼ������ѭ�� 
		printf("���Լ��Ϊ%d\n",i);
    	printf("��С������Ϊ%d\n",a*b/i);//��������Ϊ��С�����������Լ���� 
	}
	
	
 } 
