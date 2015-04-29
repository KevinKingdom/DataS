#include "stdio.h"

void QuickSort(int *a, int low, int high){
	int index=a[low];
	int i=low;
	int j=high;
	if(low>=high)
		return;
	while(i<j){
		while(i<j&&a[j]>=index)
			j--;
		a[i]=a[j];
		while(i<j&&a[i]<=index)
			i++;
		a[j]=a[i];
	}
	a[i]=index;
	QuickSort(a,low,i-1);
	QuickSort(a,i+1,high);
}
