#include <iostream>
using namespace std;
int main() {
	int w[6] = { 0,5,4,3,2,1 };
    int v[6] = { 0,1,2,3,4,5 };
    int cnt[6] = { 0,1,2,1,2,1 };
    int dp[11] = { 0 };
    int n = 5, c = 10; 
	//01背包 
	for(int i = 1; i < n; i++)
		for(int j = c; j >= w[i]; j--)
			dp[j] = max(dp[j],dp[j-w[i]] + v[i]);
	//完全背包 
	for(int i = 1; i < n; i++)
		for(int j = w[i]; j <= c; j++)
			dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
	//多重背包
	for(int i = 1; i < n; i++)
		for(int k = 1; k < cnt[i]; k++)
			for(int j = c; j >= w[i]; j--)
				dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
	cout << dp[c];	 
	return 0;
}

