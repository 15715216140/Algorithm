#include <stdio.h>
#include <string.h>
#define M 100 //��ͨ�ַ���ƥ�� 
#define N 10
int pipei(char *s, char *t);
int main()
{
	int  number; 
	char s[M], t[N];
	scanf("%s" ,s);
	scanf("%s", t);
	number = pipei(s,t);
	printf("s[%d]��ʼƥ��", number);
 } 
 int pipei(char *s, char *t)
 {
 	int i = 0;
 	int j = 0;
 	while (i <strlen(s) && j < strlen(t))
 	{
 		if (s[i] == t[j])//�����ȣ�������һ���ַ���ƥ�� 
 		{	i++; j++; }
		else
		{
			i=i-j+1;//�˻���һ��ƥ�����һλ 
		 	j=0;  //j�˻��Ӵ� 
		}
	 }
	 if (j==strlen(t))//���ƥ��ɹ���j��������j++��j���ַ������ȴ�һ
	 	return i-j;
	else 
		{
			return -1; 
		}
 }
