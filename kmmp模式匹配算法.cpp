#include<cstdio>  
#include<cstring>  
int NEXT[1000];  
int main()  
{  
      
    char a[100],b[100];  
    scanf("%s%s",a,b);  
    int i,j;  
    int n = strlen(a);  
    int m = strlen(b);  
    j = -1;i=0;NEXT[0] = -1;  
    while(i<m){  
        if(j == -1 || b[i] == b[j]){  
            i++;j++;  
            NEXT[i] = j;  
        }  
        else j = NEXT[j];  
    }  
    i = j = 0;  
    while(i<n){  
        if(j == -1 || a[i] == b[j]){  
            i++;j++;  
            if(j == m) break;  
        }  
        else j = NEXT[j];  
    }  
    printf("%d\n",i-m+1);  
  
}  
