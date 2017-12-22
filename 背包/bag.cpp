#include <iostream>//dp
using namespace std;
int dp[1000][1000] = {0};
int main() {
	int v, m, count = 0;
	cin >> v >> m;
	int a[1000][2] = {0};
	for(int i = 1; i <= m; i++) {//faced with each sth, how choose 
		int p, vt;
		cin >> vt >> p;
		a[count++][0] = vt; 
		a[count-1][1] = p;   
		for(int j = 1; j <= v; j++) {
			if(j >= vt)
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-vt] + p) ;//weather in or not in can get maxvuale;(while in: goback and clear some place ,than put it in)
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[m][v] << endl;
	for(int i = 1; i <= m ;i++ ) {//put progess 
		for(int j = 1; j <= v; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
	for(int i = m - 1; i >= 0; i--) {//back to print progess
		if(dp[i][v] != dp[i -1][v] ) {
			cout <<  i << ' '<<  a[i][0]  << ' '<< a[i][1] << endl; 
		}
	}
	return 0;
} 

