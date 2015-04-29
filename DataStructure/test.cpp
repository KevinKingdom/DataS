#include "stdio.h"
//#include "heap-sort.cpp"
#include "straightInsertSort.cpp"
#include "bubbleSort.cpp"
#include "quickSort.cpp"
#include "mergeSort.cpp"

int main(){
//	int a[]={0,3,5,8,9,1,2};
//	HeapSort(a,6);

	int a[]={3,5,8,9,1,2,13,17,4,6};
//	StraightInsertSort(a,10);
//	BubbleSort(a,10);
//	QuickSort(a,0,9);
	MergeSort(a,0,9);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
