//�����������в�������������У������ݹ��� 
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int s[100][100] = {0};
	int l1, l2; 
	string s1 = "123456789", s2 = "13579";
	l1 = s1.size() ; l2 = s2.size() ;
	for(int i = 1; i <= l1; i++) {
		for(int j = 1; j <= l2; j++) {
			if(s1[i-1] == s2[j-1]) 	s[i][j] = s[i-1][j-1] + 1;
			else 				s[i][j] = max(s[i-1][j],s[i][j-1]);
			cout << s[i][j];
		}
		cout << endl;
	} 
	int ans = s[l1][l2];
	cout << ans << endl;
	int i = l1-1, j = l2-1;
	while(i >=0 && j>=0) {
		if(s1[i] == s2[j]) {
			cout << s1[i] ;	//�����ǵ��������Ϊ�������͵�������ˣ�
								 	//�����Ҫ����you can add or change some code //can use a stack to make it
			i--;
			j--;
		}
		else {
			if(s[i][j+1] > s[i+1][j]) 	i--;
			else 						j--;
		}
	} 
	return 0;
}
