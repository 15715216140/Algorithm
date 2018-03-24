#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int post[] = {3,4,2,6,5,1};
int in[] = {3, 2, 4, 1, 6, 5};
void pre (int root, int begin, int end) {
	if(begin > end) 	return ;//循环结束条件
	int i = end;
	while (in[i] != post[root]) i--;//找到根节点在中序中的下标
	cout << post[root] << ' ';//打印后（前中）可自行调节位置即可；
	pre(root-1 + -(end - i), begin,i-1);	//左子树递归，前序中根节点前一个即左子树根节点；
	pre(root-1,i+1,end);//右子树递归，
}
int main() {
	pre(5,0,5); // int1 当前根节点在后序序列下标
				//int2,int3以此为根的节点的左右子树在中序序列中的始末位置；
	return 0;
}




