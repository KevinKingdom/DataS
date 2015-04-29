#include "stdio.h"
//#include "heap-sort.cpp"
#include "straightInsertSort.cpp"
#include "bubbleSort.cpp"
#include "quickSort.cpp"
#include "mergeSort.cpp"
#include "radixSort.cpp"

int main(){
//	int a[]={0,3,5,8,9,1,2};
//	HeapSort(a,6);

	int a[]={333,465,188,193,812,222,139,817,564,276};
//	StraightInsertSort(a,10);
//	BubbleSort(a,10);
//	QuickSort(a,0,9);
//	MergeSort(a,0,9);
	RadixSort(a,10,3);
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
