#include <iostream>
#include <algorithm>
#include <string>
#define inf 99999999;
using namespace std;
int main() {
	int n, m, t1 , t2, t3;
	int e[100][100];
	cin >> n >> m;//input point and side;
	for(int i = 1; i <= n; i++)//initialize
		for(int j = 1; j <= n; j++)
			if(i == j)	e[i][j] = 0;
			else		e[i][j] = inf;
	for(int i = 1; i <= n; i++)//initialize
		for(int j = 1; j <= n; j++) {
			cin >> t1 >> t2 >> t3;
			e[t1][t2] = t3;
		}
	//floyd core code
	for(int k = 1; k <= n; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				if(e[i][j] > e[i][k] + e[k][j])
					e[i][j] = e[i][k] + e[k][j];//经过k点后有没有变小 
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cout << e[i][j] << ' ';
		cout << endl; 
	return 0;
}


