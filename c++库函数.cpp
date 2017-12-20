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
	转成数字sscanf(c, "%d", &a); // 不要忘记 “&”
    转成字符串sprintf(c, "%d", b);
    freopen("in.txt","r",stdin) ;
    freopen("out.txt",stdout);
	to_string();//返回型操作，原来数不变
	stringstream stream;
	stream << a; stream >> b;
追加字符
	s = s + 'a' + 'b' ;
	
	 
	
}
sort函数的cmp必须按照规定来写，即必须只是 > 或者 < 
比如:
return a > b;
return a < b;

1
2setprecision的头文件为：#include <iomanip>
会自动四舍五入
setprecision(n)表示显示n个有效数字
和fixed连用可以控制小数点后面输出的位数
cout << setprecision(2) << 1.251 << endl;//输出为1.3
cout << fixed << setprecision(2) << 1.236 << endl;//输出为1.24
#include <algorithm>
{
	max_element(a,a+3)//返回最大值的地址。a表示数组首地址，3表示元素个数 
	min_element(a,a+3)
sort
	sort(a,a+3,comp) 
		sort函数的cmp必须按照规定来写，即必须只是 > 或者 < 
		return a > b;
		return a < b;
	
}
栈的常用操作函数：
top()
push()
pop()
size()
empty()

#include<queue>       #include<queue>  
  
详细用法:  
  
定义一个queue的变量     queue<type> M  
  
查看是否为空范例        M.empty()    是的话返回1，不是返回0;  
  
从已有元素后面增加元素   M.push()  
  
输出现有元素的个数      M.size()  
  
显示第一个元素          M.front()  
  
显示最后一个元素        M.back()  
  
清除第一个元素          M.pop() 


#include <stack>
//可以使用list或vector作为栈的容器，默认是使用deque的。
stack<int, list<int>> a;
stack<int, vector<int>>   b;

printf("%d ", a.top()); //取栈项数据
a.push(3); //将3这个元素入栈a
b.push(2); //将2这个元素入栈b
a.pop(); //将栈顶元素出栈

//栈的大小
printf("%d %d\n", a.size(), b.size());

if(a.empty())
return 1; // 判断栈是否为空
1
#include <stack>
//可以使用list或vector作为栈的容器，默认是使用deque的。
stack<int, list<int>> a;
stack<int, vector<int>>   b;
 
printf("%d ", a.top()); //取栈项数据
a.push(3); //将3这个元素入栈a
b.push(2); //将2这个元素入栈b
a.pop(); //将栈顶元素出栈
 
//栈的大小
printf("%d %d\n", a.size(), b.size());
 
if(a.empty())


C++的头文件！ 
#include <ctype.h>//字符处理 

#include <errno.h>//定义错误码 

#include <float.h>//浮点数处理 

#include <fstream.h>//文件输入／输出 

#include <iomanip.h>//参数化输入／输出 

#include <iostream.h> //数据流输入／输出 

#include <limits.h> //定义各种数据类型最值常量 

#include <locale.h> //定义本地化函数 

#include <math.h> //定义数学函数 

#include <stdio.h> //定义输入／输出函数 

#include <stdlib.h> //定义杂项函数及内存分配函数 

#include <string.h> //字符串处理 

#include <strstrea.h> //基于数组的输入／输出 

#include <time.h> //定义关于时间的函数 

#include <wchar.h> //宽字符处理及输入／输出 

#include <wctype.h> //宽字符分类 


标准 C++ （同上的不再注释） 

#include <algorithm> //STL 通用算法 

#include <bitset> //STL 位集容器 

#include <cctype> 

#include <cerrno> 

#include <clocale> 

#include <cmath> 

#include <complex> //复数类 

#include <cstdio> 

#include <cstdlib> 

#include <cstring> 

#include <ctime> 

#include <deque> //STL 双端队列容器 

#include <exception> //异常处理类 

#include <fstream> 
#include <functional> //STL 定义运算函数（代替运算符） 

#include <limits> 

#include <list> //STL 线性列表容器 

#include <map> //STL 映射容器 

#include <iomanip> 

#include <ios> //基本输入／输出支持 

#include <iosfwd> //输入／输出系统使用的前置声明 

#include <iostream> 

#include <istream> //基本输入流 

#include <ostream> //基本输出流 

#include <queue> //STL 队列容器 

#include <set> //STL 集合容器 

#include <sstream> //基于字符串的流 

#include <stack> //STL 堆栈容器 

#include <stdexcept> //标准异常类 

#include <streambuf> //底层输入／输出支持 

#include <string> //字符串类 

#include <utility> //STL 通用模板类 

#include <vector> //STL 动态数组容器 

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
    //字符串比较  
    if(str1.compare(str2)>0)  
        printf("str1>str2\n");  
    else if(str1.compare(str2)<0)  
        printf("str1<str2\n");  
    else  
        printf("str1==str2\n");  
      
    //str1的子串（从索引3开始，包含4个字符）与str2进行比较  
    if(str1.compare(3,4,str2)==0)  
        printf("str1的指定子串等于str2\n");  
    else  
        printf("str1的指定子串不等于str2\n");  
      
    //str1指定子串与str2的指定子串进行比较  
    if(str1.compare(3,4,str2,3,4)==0)  
        printf("str1的指定子串等于str2的指定子串\n");  
    else  
        printf("str1的指定子串不等于str2的指定子串\n");  
      
    //str1指定子串与字符串的前n个字符进行比较  
    if(str1.compare(0,2,"hi,hello",2)==0)  
        printf("str1的指定子串等于指定字符串的前2个字符组成的子串\n");  
    else  
        printf("str1的指定子串不等于指定字符串的前2个字符组成的子串\n");  
    return 0;  
      

