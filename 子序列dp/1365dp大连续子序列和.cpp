



[2017 江苏科技大学 程序设计竞赛]
E. 最大连续子序列和 (改编)
题目描述
求取一串数中最大连续子序列的和，例如给定的数为1, 3, -2, 4, -5，则最大连续子序列和为 6， 即 1 + 3 + (-2) + 4 = 6。

输入描述
有多组测试数据，每组测试数据占若干行。

第 1 行：一个数 N，表示给定数字的个数。N 不超过 95000。

第 2 行：共 N 个用空格分隔的数，为题目中所述的一串数，每个数保证在 32 位有符号整数范围内。

输出描述
共一行。一个数，代表最大连续子序列的和。

输入样例
5

1 3 -2 4 -5

输出样例
6#include <iostream>
#include <algorithm>
int a[95005];
int sum[95005];
using namespace std;
int MaxSum(int n)
{
    sum[0] = a[0];
    int t = a[0];
    for(int i = 1; i < n; i++) 
    {	
    	//sum[i]表示以a[i]为子串尾时，最大的子序列的和 ； 
		//如果在sum[i-1]<0;说明之前的数不会计入序列；那此时，就要重新开始计数，于是新sum[i] = a[i];
		//如果在sum[i-1]>=0;说明之前的数会计入序列；那此时继续向后；
		if(sum[i-1] >= 0) 			 
			sum[i] = sum[i-1] + a[i];
		else
			sum[i] = a[i];
		if(t < sum[i]) 
			t = sum[i];
    }
	return t;
	
}
int main() {
	int n;
	while(cin >> n) {
		for(int i = 0; i < n; i++) {
			scanf("%d",&a[i]);
		}
		cout << MaxSum(n) << endl;
	}
	return 0;
}


