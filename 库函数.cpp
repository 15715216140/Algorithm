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
	��ʼ��		memset(s,c,n) 		//ǰn���ַ���ʼ��Ϊc
 	����		ptr memchr(string,char,count)//return ptr * p  or null�� 
	 			ptr strchr(string,char)//return��һ�γ��ֵ�ָ�� 
				ptr strrchr(string,char)//return���һ�γ��ֵ�ָ��   
				int strspn(s1,s2)	//return��s1��ʼ���ҵ���һ���ַ�����s2��û���ֹ��������ش�λ�õ��±꣬
				int strcspn(s1,s2)	//return��s1��ʼ���ҵ���һ���ַ�����s2�г��ֹ��������ش�λ�õ��±꣬
				ptr strpbrk(s1,s2)	//return��s1��ʼ���ҵ���һ���ַ�����s2�г��ֹ��������ش�λ��ָ�룬
				strstr(s1,s2) //return���s2���Ӵ��������Ӵ���ַ 
	�Ƚ�		int memcmp(s1,s2,count)//return�߼� 
				int strcmp(s1,s2)//return�߼� 
				int strncmp(s1,s2,n)//return�߼� 
	 			strcpy(s1,s2)
				int strcoll(s1,s2)			//���ݱ��ع��򲻼ƽϴ�С��һ��Ĭ��assic�룩 
	����		memcpy(s1,s2m,count)// ;
	 			memmove(s1,s2m,count)//s1,s2�ص�Ҳ��ʹ�ã�
	 			strncpy(s1,s2,n)

	����		strcat(s1,s2)
			 	strncat(s1,s2,n)
}
	strlen(s)
#include <math.h>
{
		xxxf//����������ֵfloat ;
		xxx//����������ֵdouble;
	 	xxxl//����������ֵlong double
			cos();sin();tan(); 
			acos();asin();atan();//����  		atan2();//����ȷ 
			acosh();asinh();atanh()//����ÿ��Ԫ��; 
			cbrt();//return������
			sqrt();//returnƽ����
			ceil();//return������������һ
			floorf()//return�������������� 
			copy(m,n)//��������
			exp()//return��Ȼ��e��n�η�
			expm1()//return��Ȼ��e��n�η�-1
			exp2()//return2��n�η�
			fabs()//return����ֵ�� 
			fdim(m,n)//return 0 or a-b
			fmax()//return�ϴ�ֵ
			fmin()//return��Сֵ
			fmod(n,m)//returnȡ�� 
			hypot(n,m)//g�������� 
			llrint()//��������  .5���� 
			log();log2();log10
			pow(m,n)//m��n����
			remainder(m,n)//���������
			lgamma()//return٤��������ֵ 
			tgamma()//return٤����
			 
} 
#include <stdlib>
{
	abs()//return ����ֵ  labs()  llabs()
	atof()//charת����float
	atoi()
	atoll) 
	strtod()
	strtof()
	strtold()
	sstrtoll()
	strtoul()
	bsearch(p1Ҫ���ص�ָ��,p2�����׵�ַ,��Ա����,��Ա�Ĵ�С���ֽ�����,compare�ȽϺ���)//����Ӧ����ǰ������� 
	qsort(�����׵�ַ,Ԫ�ظ���,Ԫ�ش�С���ֽ�����,compare�ȽϺ���)
	rand()//returα�������0-RAND_MAX
	srand(unsined int)//����α�������� 
}
#include <time.h>
{
	
 } 
	
