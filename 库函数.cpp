#include <ctype.h>
{
	isalpha ();
	isalnum ();
	isdigit ();
	isxdigit ();
	islower ();
	isupper();
	tolower()
	toupper();
	
} 
 
#include <string.h>
{
	初始化		memset(s,c,n) 		//前n个字符初始化为c
 	查找		ptr memchr(string,char,count)//return ptr * p  or null； 
	 			ptr strchr(string,char)//return第一次出现的指针 
				ptr strrchr(string,char)//return最后一次出现的指针   
				int strspn(s1,s2)	//return从s1开始，找到第一个字符（在s2中没出现过），返回此位置的下标，
				int strcspn(s1,s2)	//return从s1开始，找到第一个字符（在s2中出现过），返回此位置的下标，
				ptr strpbrk(s1,s2)	//return从s1开始，找到第一个字符（在s2中出现过），返回此位置指针，
				strstr(s1,s2) //return如果s2是子串，返回子串地址 
	比较		int memcmp(s1,s2,count)//return逻辑 
				int strcmp(s1,s2)//return逻辑 
				int strncmp(s1,s2,n)//return逻辑 
	 			strcpy(s1,s2)
				int strcoll(s1,s2)			//根据本地规则不计较大小（一般默认assic码） 
	复制		memcpy(s1,s2m,count)// ;
	 			memmove(s1,s2m,count)//s1,s2重叠也可使用；
	 			strncpy(s1,s2,n)

	连接		strcat(s1,s2)
			 	strncat(s1,s2,n)
}
	strlen(s)
#include <math.h>
{
		xxxf//参数、返回值float ;
		xxx//参数、返回值double;
	 	xxxl//参数、返回值long double
			cos();sin();tan(); 
			acos();asin();atan();//单个  		atan2();//更精确 
			acosh();asinh();atanh()//函数每个元素; 
			cbrt();//return立方根
			sqrt();//return平方根
			ceil();//return浮点数不整进一
			floorf()//return浮点数不整舍弃 
			copy(m,n)//拷贝符号
			exp()//return自然数e的n次方
			expm1()//return自然数e的n次方-1
			exp2()//return2的n次方
			fabs()//return绝对值； 
			fdim(m,n)//return 0 or a-b
			fmax()//return较大值
			fmin()//return较小值
			fmod(n,m)//return取余 
			hypot(n,m)//g勾股求弦 
			llrint()//四舍五入  .5舍弃 
			log();log2();log10
			pow(m,n)//m的n次幂
			remainder(m,n)//除后的余数
			lgamma()//return伽马函数绝对值 
			tgamma()//return伽马函数
			 
} 
#include <stdlib>
{
	abs()//return 绝对值  labs()  llabs()
	atof()//char转换成float
	atoi()
	atoll) 
	strtod()
	strtof()
	strtold()
	sstrtoll()
	strtoul()
	bsearch(p1要返回的指针,p2数组首地址,成员数量,成员的大小（字节数）,compare比较函数)//数组应该提前完成排序 
	qsort(数组首地址,元素个数,元素大小（字节数）,compare比较函数)
	rand()//retur伪随机数，0-RAND_MAX
	srand(unsined int)//设置伪随机数起点 
}
#include <time.h>
{
	
 } 
	
