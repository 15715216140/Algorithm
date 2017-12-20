#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
	void dfs(int *g[],int i) {
		visited[i] = true;
		cout << i;
		for(int j = 0; j < num; j++) {
			if(g[i][j] == 1 && visited[i] == flase)
				dfs(g,j);
		} 
	}
int main() {
	for(int i = 0; i < num; i++) {
		visited[i] == flase;
	for(int i = 0; i < num; i++) {
		if(viseted[i] == flase)
			dfs(g,i);
	} 
	return 0;
}
void bfs(G) {
	int i, j;
	memset(vis,false,sizeof(vis));
	queue q;
	for(i = 0; i < num; i++) {
		if(visited[i] == flase) {
			visited[i] = true;
			cout << i;
			enqueue(&q,i);
			while(!emptyqueue(q)) {
				dequeue(&q,i)
				for(int j = 1; j <= num; j++) {
					if(g[i][j] == 1 && visit[j] == flase) {
						visit[j] = true;
						cout << j;
						enqueue(&q,j); 
					}
				}
			} 
		}
	}
} 

