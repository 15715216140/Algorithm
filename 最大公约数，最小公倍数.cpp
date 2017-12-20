#include <stdio.h>
int main()
{
	int a,b,t,i,m,n;
	printf("请输入两个数\n");
	scanf("%d%d",&a,&b);
	if(a==b)
   {
   	printf("最大公约数为%d\n",a);
    printf("最小公倍数为%d\n",a);
	
	} 
	else
	{
		if(a>b)
		{
			t=a;
			a=b;
			b=t;
		}//把小的放在前面 
		for(i=a;i<b;i--)
		{
			m=b%i; 
			n=a%i;
			if(n+m==0)
			break;
		}//按顺序取公约数，最大的先被取到，然后跳出循环 
		printf("最大公约数为%d\n",i);
    	printf("最小公倍数为%d\n",a*b/i);//两个数积为最小公倍数和最大公约数积 
	}
	
	
 } 
