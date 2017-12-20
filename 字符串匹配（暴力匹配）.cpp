#include <stdio.h>
#include <string.h>
#define M 100 //普通字符串匹配 
#define N 10
int pipei(char *s, char *t);
int main()
{
	int  number; 
	char s[M], t[N];
	scanf("%s" ,s);
	scanf("%s", t);
	number = pipei(s,t);
	printf("s[%d]开始匹配", number);
 } 
 int pipei(char *s, char *t)
 {
 	int i = 0;
 	int j = 0;
 	while (i <strlen(s) && j < strlen(t))
 	{
 		if (s[i] == t[j])//如果相等，继续下一个字符的匹配 
 		{	i++; j++; }
		else
		{
			i=i-j+1;//退回上一次匹配的下一位 
		 	j=0;  //j退回子串 
		}
	 }
	 if (j==strlen(t))//如果匹配成功（j加满，再j++，j比字符串长度大一
	 	return i-j;
	else 
		{
			return -1; 
		}
 }
