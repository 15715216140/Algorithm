#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int pre[] = {1, 2, 3, 4, 5, 6};  
int in[] = {3, 2, 4, 1, 6, 5}; 
int cnt = 0;
int a[100];
void post (int root, int begin, int end) {
	if(begin > end) 	return ;//循环结束条件 
	int i = begin;
	while (in[i] != pre[root]) i++;//找到根节点在中序中的位置 
	a[cnt++] = in[i];
//	cout << pre[root] ;
	post(root+1,begin,i-1);//左子树递归，根节点后一个即左子树根节点； begin，i-1；在中序中的始末位置 
	post(root+1+i-begin,i+1,end);//右子树递归，i-begin是被左子树耽误的位置要补回来； i+1 , end在中序中的始末位置 
	cout << pre[root] << ' ';//打印后（前中）可自行调节位置即可； 
}
int main() {
	post(0,0,5); // int1 当前根节点在前序序列中年位置，int2,int3以此为根的节点的左右子树在中序序列中的始末位置； 
	for(int i = 0; i < cnt; i++) {
		if(i != 0)	cout << ' ';
		cout << a[i];
	}
	return 0;
}
