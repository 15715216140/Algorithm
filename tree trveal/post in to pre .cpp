#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int post[] = {3,4,2,6,5,1};
int in[] = {3, 2, 4, 1, 6, 5};
void pre (int root, int begin, int end) {
	if(begin > end) 	return ;//ѭ����������
	int i = end;
	while (in[i] != post[root]) i--;//�ҵ����ڵ��������е��±�
	cout << post[root] << ' ';//��ӡ��ǰ�У������е���λ�ü��ɣ�
	pre(root-1 + -(end - i), begin,i-1);	//�������ݹ飬ǰ���и��ڵ�ǰһ�������������ڵ㣻
	pre(root-1,i+1,end);//�������ݹ飬
}
int main() {
	pre(5,0,5); // int1 ��ǰ���ڵ��ں��������±�
				//int2,int3�Դ�Ϊ���Ľڵ���������������������е�ʼĩλ�ã�
	return 0;
}




