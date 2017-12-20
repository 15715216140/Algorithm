1.递归求最大公约数 
int gcd(int a, int b)    
{    
    int i;    
    if (b==0)    
        return a;   
    else    
        return gcd(b,a%b);    
    
} 
2.递归青蛙跳台阶 
 int qingwa(int n) {
 	if(n ==1 || n = 2)
 		return n;
 	else
 		return f(n - 1) + f(n - 2);
 }
1.快排
int qsort (int a[], int low, int high)
{
	int key;
	if(low < high) {
		key = a[low];
		while(low < high) {
			while(low < high && key <= a[high] )
			high--;
			swap(a[low],a[high]);
			while(low < high && key >= a[low] )
			low++;
			swap(a[low],a[high]);
		}
		pivot = low;
		qsort(a,low,pivot - 1);
		qsort(a,pivot +1,high);
	}
}
01背包：
int n, v;
for(i = 1; i <= n; i++) {
	cin a, b;
	for(j = 1; j <=v; j++) {
	if(j >= a)
		d[i][j] = max(d[i-1][j],d[i-1][j-a] + b)
	else
		d[i][j] = d[i-1][j];
	}
	cout << d[n][v];
} 
三角数塔
fo(i = 0; i < n - 1; i++ ) {
	for(j = 0; j <= i; j++) {
		maxsum[j] = max(maxnum[j],maxnum[j+1]) + d[i][j];
	}
}
拆分集合
if(n*(n+1) % 4 != 0 )
		cout << "0";
else
	{
		for(i = i; i <= n; i++ ) {
			for(k = sum; k <=1; k--) {
				count[k] = count[k-1];
			}
		} 
		cout << count[sum];
	}
合并排序 
    while (i <= mid && j <= high) {
        if (array[i] <= array[j]) {
            array2[k] = array[i];
            i++;
            k++;
        } else {
            array2[k] = array[j];
            j++;
            k++;
        }
    }

    while (i <= mid) {
        array2[k] = array[i];
        i++;
        k++;
    }

    while (j <= high) {
        array2[k] = array[j];
        j++;
        k++;
    }
    for (k = 0, i = low; i <= high; i++, k++) {
        array[i] = array2[k];
    }
}
 
