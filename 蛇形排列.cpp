#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int map[100][100];
		int n, num, x, y;
	cin >> n;
	num = map[x=0][y=n-1] = 1;
	while(num < n*n) {
		while(x+1 < n && map[x+1][y] == 0)
			map[++x][y] = ++num;
		while(y-1 >= 0 && map[x][y-1] == 0) 
			map[x][--y] = ++num;
		while(x-1 >= 0 && map[x-1][y] == 0)
			map[--x][y] = ++num;
		while(y+1 < n && map[x][y+1] == 0)
			map[x][++y] = ++num;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%4d",map[i][j]);
		}
		cout << endl;
	}
	return 0;
}

