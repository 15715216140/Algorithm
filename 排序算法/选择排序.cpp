#include <stdio.h>
#define N 10 
int main() 
{
    int a[N+1],k;  //a[0]���ڱ� 
    int i, j;
    for ( i = 1; i <= N; i ++ )   scanf("%d", &a[i]); 
  
	 for ( i = 1; i < N; i ++ )   //ѭ��N-1�Σ�ÿ���ҵ���С�ģ� 
	  {
   	k=i;
    for ( j = i + 1; j < N; j ++)
    if ( a[k] >a[j] )
	k=j;                          //��¼����С����λ�� ���±꣩ 
	if(k!=i)
	 { a[0] = a[i]; a[i] = a[k]; a[k] =a[0]; } //������ǰ�� 
    

}
for( i = 0; i < 10; i ++)  printf("%4d",a[i]); //��ʾ�����Ľ��
}
