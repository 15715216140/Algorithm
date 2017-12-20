# include <stdio.h>
int main() 
{
	int i,j,t;
	for(i=5;i<=2000;i++)
	 {
		for(j=2;j*j<=i;j++) 
		{
			t=i%j;
			if(t==0)
			break;
		} 
		if(t)
		printf("%d\n",i); 
	}
	
}  
