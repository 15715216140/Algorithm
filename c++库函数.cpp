#include <string>
{
	atoi()
	atof()
	atod()
	atold()
	stoi()
	stof()
	stod()
	stold()
	ת������sscanf(c, "%d", &a); // ��Ҫ���� ��&��
    ת���ַ���sprintf(c, "%d", b);
    freopen("in.txt","r",stdin) ;
    freopen("out.txt",stdout);
	to_string();//�����Ͳ�����ԭ��������
	stringstream stream;
	stream << a; stream >> b;
׷���ַ�
	s = s + 'a' + 'b' ;
	
	 
	
}
sort������cmp���밴�չ涨��д��������ֻ�� > ���� < 
����:
return a > b;
return a < b;

1
2setprecision��ͷ�ļ�Ϊ��#include <iomanip>
���Զ���������
setprecision(n)��ʾ��ʾn����Ч����
��fixed���ÿ��Կ���С������������λ��
cout << setprecision(2) << 1.251 << endl;//���Ϊ1.3
cout << fixed << setprecision(2) << 1.236 << endl;//���Ϊ1.24
#include <algorithm>
{
	max_element(a,a+3)//�������ֵ�ĵ�ַ��a��ʾ�����׵�ַ��3��ʾԪ�ظ��� 
	min_element(a,a+3)
sort
	sort(a,a+3,comp) 
		sort������cmp���밴�չ涨��д��������ֻ�� > ���� < 
		return a > b;
		return a < b;
	
}
ջ�ĳ��ò���������
top()
push()
pop()
size()
empty()

#include<queue>       #include<queue>  
  
��ϸ�÷�:  
  
����һ��queue�ı���     queue<type> M  
  
�鿴�Ƿ�Ϊ�շ���        M.empty()    �ǵĻ�����1�����Ƿ���0;  
  
������Ԫ�غ�������Ԫ��   M.push()  
  
�������Ԫ�صĸ���      M.size()  
  
��ʾ��һ��Ԫ��          M.front()  
  
��ʾ���һ��Ԫ��        M.back()  
  
�����һ��Ԫ��          M.pop() 


#include <stack>
//����ʹ��list��vector��Ϊջ��������Ĭ����ʹ��deque�ġ�
stack<int, list<int>> a;
stack<int, vector<int>>   b;

printf("%d ", a.top()); //ȡջ������
a.push(3); //��3���Ԫ����ջa
b.push(2); //��2���Ԫ����ջb
a.pop(); //��ջ��Ԫ�س�ջ

//ջ�Ĵ�С
printf("%d %d\n", a.size(), b.size());

if(a.empty())
return 1; // �ж�ջ�Ƿ�Ϊ��
1
#include <stack>
//����ʹ��list��vector��Ϊջ��������Ĭ����ʹ��deque�ġ�
stack<int, list<int>> a;
stack<int, vector<int>>   b;
 
printf("%d ", a.top()); //ȡջ������
a.push(3); //��3���Ԫ����ջa
b.push(2); //��2���Ԫ����ջb
a.pop(); //��ջ��Ԫ�س�ջ
 
//ջ�Ĵ�С
printf("%d %d\n", a.size(), b.size());
 
if(a.empty())


C++��ͷ�ļ��� 
#include <ctype.h>//�ַ����� 

#include <errno.h>//��������� 

#include <float.h>//���������� 

#include <fstream.h>//�ļ����룯��� 

#include <iomanip.h>//���������룯��� 

#include <iostream.h> //���������룯��� 

#include <limits.h> //�����������������ֵ���� 

#include <locale.h> //���屾�ػ����� 

#include <math.h> //������ѧ���� 

#include <stdio.h> //�������룯������� 

#include <stdlib.h> //������������ڴ���亯�� 

#include <string.h> //�ַ������� 

#include <strstrea.h> //������������룯��� 

#include <time.h> //�������ʱ��ĺ��� 

#include <wchar.h> //���ַ��������룯��� 

#include <wctype.h> //���ַ����� 


��׼ C++ ��ͬ�ϵĲ���ע�ͣ� 

#include <algorithm> //STL ͨ���㷨 

#include <bitset> //STL λ������ 

#include <cctype> 

#include <cerrno> 

#include <clocale> 

#include <cmath> 

#include <complex> //������ 

#include <cstdio> 

#include <cstdlib> 

#include <cstring> 

#include <ctime> 

#include <deque> //STL ˫�˶������� 

#include <exception> //�쳣������ 

#include <fstream> 
#include <functional> //STL �������㺯��������������� 

#include <limits> 

#include <list> //STL �����б����� 

#include <map> //STL ӳ������ 

#include <iomanip> 

#include <ios> //�������룯���֧�� 

#include <iosfwd> //���룯���ϵͳʹ�õ�ǰ������ 

#include <iostream> 

#include <istream> //���������� 

#include <ostream> //��������� 

#include <queue> //STL �������� 

#include <set> //STL �������� 

#include <sstream> //�����ַ������� 

#include <stack> //STL ��ջ���� 

#include <stdexcept> //��׼�쳣�� 

#include <streambuf> //�ײ����룯���֧�� 

#include <string> //�ַ����� 

#include <utility> //STL ͨ��ģ���� 

#include <vector> //STL ��̬�������� 

#include <cwchar> 

#include <cwctype> 

using namespace std; 
[cpp] view plain copy
#include <iostream>  
#include <string>  
#include <cctype>  
using std::cout;  
using std::endl;  
using std::cin;  
using std::string;  
int main(void){  
    string str1="hi,test,hello";  
    string str2="hi,test";  
    //�ַ����Ƚ�  
    if(str1.compare(str2)>0)  
        printf("str1>str2\n");  
    else if(str1.compare(str2)<0)  
        printf("str1<str2\n");  
    else  
        printf("str1==str2\n");  
      
    //str1���Ӵ���������3��ʼ������4���ַ�����str2���бȽ�  
    if(str1.compare(3,4,str2)==0)  
        printf("str1��ָ���Ӵ�����str2\n");  
    else  
        printf("str1��ָ���Ӵ�������str2\n");  
      
    //str1ָ���Ӵ���str2��ָ���Ӵ����бȽ�  
    if(str1.compare(3,4,str2,3,4)==0)  
        printf("str1��ָ���Ӵ�����str2��ָ���Ӵ�\n");  
    else  
        printf("str1��ָ���Ӵ�������str2��ָ���Ӵ�\n");  
      
    //str1ָ���Ӵ����ַ�����ǰn���ַ����бȽ�  
    if(str1.compare(0,2,"hi,hello",2)==0)  
        printf("str1��ָ���Ӵ�����ָ���ַ�����ǰ2���ַ���ɵ��Ӵ�\n");  
    else  
        printf("str1��ָ���Ӵ�������ָ���ַ�����ǰ2���ַ���ɵ��Ӵ�\n");  
    return 0;  
      

