[2017 NUIST 程序设计竞赛 模拟赛]
E. 最长递增子序列
题目描述
给出长度为 N 的数组，找出这个数组的最长递增子序列。

子序列可以不连续，连续的那叫字串。而递增子序列是指，子序列中后一个元素一定比前面一个大。

例如：5 1 6 8 2 4 5 10，最长递增子序列是 1 2 4 5 10。

输入描述
有多组输入，每一组输入由两行构成。

第 1 行中有 1 个数 N，表示序列的长度( 2 <= N <= 50000 )

第 2 行：每行 1 个数，对应序列的元素( -10^9 <= S[i] <= 10^9 )

输入描述
输出最长递增子序列的长度。

输入样例
8

5 1 6 8 2 4 5 10

输入样例
5

#include <iostream>
#include <algorithm>
#include <cstring>
int a[50005]; 
int sum[50005];
using namespace std;
int main() {
	int n, t;
	while(scanf("%d",&n) != EOF) {
		for(int i = 0; i < n; i++) {
			scanf("%d",&a[i]);
			sum[i] = 1;
		}
		t = 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(a[i] > a[j])
				sum[i] = max(sum[j]+1,sum[i]);//判断是本来已经加入的序列，大还是后来并入这个心序列大，加入一个新的后大 //加入哪一个序列后更大 
		if(t < sum[i]) 
			t = sum[i];
		}
	}
		cout << t << endl;
	}
	return 0;
}


