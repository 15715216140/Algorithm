#include <iostream>//dp
using namespace std;
int dp[1000][1000];
int main() {
	int v, m;
	cin >> v >> m;

	for(int i = 1; i <= m; i++) {//faced with each sth, how choose 
		int p, vt;
		cin >> p >> vt;
		for(int j = 1; j <= v; j++) {
			if(j >= vt)
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-vt] + p) ;//weather in or not in can get maxvuale;(while in: goback and clear some place ,than put it in)
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << v - dp[m][v] << endl;
	return 0;
} 
