#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int book[100], a[100];
int ans = 0;
int sum = 0; 
int dfs(int step) {
	int i;
	if(step == 10) {//表示前9个已经放好了； 
		if(a[0]*100 + a[2]*10 +a[3]   +   a[4]*100 +a[5]*10 + a[6] 
			== a[7]*100 + a[8]*10 + a[9]) 	{
				
			cout << a[0]*100 + a[2]*10 +a[3]  <<  " + " <<  a[4]*100 +a[5]*10 + a[6] << " = "
			<<  a[7]*100 + a[8]*10 + a[9] << endl;
			ans++;
		}
		sum++; 
		return 0;
	} 
	for(int i = 1; i <= 9; i++) {
		if(book[i] == 0) {
			a[step] = i;
			book[i] = 1;
			dfs(step+1);
			book[i] = 0;
		}
	}
}
int main() {
	dfs(1);
	cout << ans << " " << sum << endl; 
	return 0;
}


