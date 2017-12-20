#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int sum = 0, ans = 0;
int a[7];
bool book[7] = {false};
int dfs(int step) {
	if(step == 7) {
		sum++;
		if( !(a[1] == 1 || a[2] == 2 || a[3] == 3 || a[4] == 4 || a[5] == 5 || a[6] == 6) ) {
			for(int i = 1; i <= 6; i++) {
				cout << a[i] << ' ';
			}
			cout << "yes" << endl ;
			ans++;
		}
		else {
				for(int i = 1; i <= 6; i++) {
					cout << a[i] << ' ';
				}
				cout <<  "no" << endl;
		}
		return 0;
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
	cout << "sum = " << sum << endl <<  "ans = "<< ans;
return 0;
}

