#include <iostream>
#include <cstring> 
using namespace std;
int map[100][100];
bool vis [100][100];
int count;
int x[8] = {0,0,1,1,1,-1,-1,-1}, y[8] = {1,-1,-1,1,0,-1,1,0};
char c;
int dfs (int i, int j) {
	for(int t = 0; t <= 7; t++) {
		if(map[i+x[t]][j+y[t]] == 1 && vis[i+x[t]][j+y[t]] == false) {
			vis[i+x[t]][j+y[t]] = true;
			t++;
			dfs(i+x[t],j+y[t]);
		}
	}
	return 0;
}
int main() {
	freopen("test.txt","r",stdin);
	int m, n, max = 0,t = 0;
	while(cin >> m >> n) {
		count = 0;
		memset(map,0,sizeof(map));
		memset(vis,false,sizeof(vis));
			for(int i = 1; i <= m; i++) {
				for(int j = 1; j <= n; j++) {
					cin >> c;
					if(c == '1')
						map[i][j] = 1;
			}
		}
		vis[1][1] == true; 
		for(int i = 1; i <= m; i++) {
			for(int j = 1; j <= n; j++) {
				if(map[i][j] == 1 && vis[i][j] == false) {
					count++;
					vis[i][j] = true;
					dfs(i,j);
					if(max < t)
						max = t;
					t = 0; 
				}
			}
		}
		cout << count << endl;
	}
}
