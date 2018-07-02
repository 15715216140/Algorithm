#include <stdio.h>
int count = 0;
int fno(int n, char A ,char B, char C) {
  	if (n==1)		printf("%03d  %c-->%c\n",++count, A, C);
  	else {
	  	fno(n-1,A,C,B);
		printf("%03d  %c-->%c\n",++count, A, C);
	  	fno(n-1,B,A,C);
	  }
  }
int main() {
	int n;
	scanf("%d",&n);
	fno(n,'A','B','C');
 }

  
