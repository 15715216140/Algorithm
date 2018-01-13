#include <iostream>
#include <cstring> 
#include <queue>
using namespace std;
int map[100][100];
bool vis [100][100];
int count, t = 0;
int x[8] = {0,0,1,1,1,-1,-1,-1}, y[8] = {1,-1,-1,1,0,-1,1,0};
char c;
int bfs (int i, int j) {
	int ti, tj;
	queue <int> q;
	vis[i][j] == true;
	q.push(i);
	q.push(j);
	while(!q.empty()) {
		ti = q.front();
		q.pop();
		tj = q.front(); 
		q.pop();
		t++;
		for(int t = 0; t <= 7; t++) {
			if(map[ti+x[t]][tj+y[t]] == 1 && vis[ti+x[t]][tj+y[t]] == false) {
				vis[ti+x[t]][tj+y[t]] = true;
				q.push(ti+x[t]);
				q.push(tj+y[t]);
			}
		}
	}
	return  t/2;
}
int main() {
	freopen("test.txt","r",stdin);
	int m, n;
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
		int maxn = 0;
		for(int i = 1; i <= m; i++) {
			for(int j = 1; j <= n; j++) {
				if(map[i][j] == 1 && vis[i][j] == false) {
					count++;
					vis[i][j] = true;
					bfs(i,j);
					if(t > maxn)
						maxn = t;
					t = 0;
				}
			}
		}
		cout << count << endl;
	}
}
