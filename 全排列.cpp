#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int a[7];
bool book[7] = {false};
void dfs(int step) {
	if(step == 7) {
		//输出语句
		return ;
	}
	for(int i = 1; i <= 6; i++) {
		if(book[i] == false) {
			book[i] = true;
			a[step] = i;
			dfs(step+1);
			book[i] = false;
		}
	}
}
int main() {
	dfs(1);
return 0;
}

