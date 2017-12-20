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

