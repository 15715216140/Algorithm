#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int> s;
	set<int>::iterator it;
	for(int i = 2; i <= 5; i++) {
		s.insert(i); 
	}
		int c = 0;
	for( it = s.begin() ; it != s.end() ;it++) {
		cout << *it <<  ' ' << c++ << endl;
	}
}

//
//int main() {
//	set<int> s;
//	for(int i = 1; i <= 55; i++) {
//		s.insert(i); 
//	}
//	for( auto it = s.begin() ; it != s.end() ;it++) {
//		cout << *it << endl;
//	}
//}



