#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int lesss(string s,int p,int q) { //p优先级高; 
	int n;
	n = s.length();
	for(int i = 0; i < n; i++) {
		if(s[(p+i)%n] < s[(q+i)%n])
			return 1;
	return 0;
	}
}
using namespace std;
int main() {
	string s;
	cin >> s; 
	int n;
	n = s.length();
	int ans = 0;
	for(int i = 1; i < n; i++) {
		if(lesss(s,i,ans) == 1)
			ans = i; 
	} 
	for(int i = 0; i < n; i++) {
		putchar(s[(ans+i)%n]);
	}
	cout << endl;
	return 0;
}

