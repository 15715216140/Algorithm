#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int pre[] = {1, 2, 3, 4, 5, 6};  
int in[] = {3, 2, 4, 1, 6, 5}; 
int cnt = 0;
int a[100];
void post (int root, int begin, int end) {
	if(begin > end) 	return ;//ѭ���������� 
	int i = begin;
	while (in[i] != pre[root]) i++;//�ҵ����ڵ��������е�λ�� 
	a[cnt++] = in[i];
//	cout << pre[root] ;
	post(root+1,begin,i-1);//�������ݹ飬���ڵ��һ�������������ڵ㣻 begin��i-1���������е�ʼĩλ�� 
	post(root+1+i-begin,i+1,end);//�������ݹ飬i-begin�Ǳ������������λ��Ҫ�������� i+1 , end�������е�ʼĩλ�� 
	cout << pre[root] << ' ';//��ӡ��ǰ�У������е���λ�ü��ɣ� 
}
int main() {
	post(0,0,5); // int1 ��ǰ���ڵ���ǰ����������λ�ã�int2,int3�Դ�Ϊ���Ľڵ���������������������е�ʼĩλ�ã� 
	for(int i = 0; i < cnt; i++) {
		if(i != 0)	cout << ' ';
		cout << a[i];
	}
	return 0;
}
