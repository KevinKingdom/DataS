#include "stdio.h"
//#include "heap-sort.cpp"
#include "straightInsertSort.cpp"
#include "bubbleSort.cpp"
#include "quickSort.cpp"
#include "mergeSort.cpp"
#include "radixSort.cpp"
#include "bucketSort.cpp"
//#include "bucketSort-example.cpp"

int main(){
//	int a[]={0,3,5,8,9,1,2};
//	HeapSort(a,6);

	int a[]={333,465,188,193,812,222,139,817,564,276};
	double b[]={0,0.18,0.17,0.26,0.95,0.38,0.56,0.47,0.29,0.88,0.91};
//	StraightInsertSort(a,10);
//	BubbleSort(a,10);
//	QuickSort(a,0,9);
//	MergeSort(a,0,9);
//	RadixSort(a,10,3);
	BucketSort(b,10);
//	bucketSort(b,10);
	for(int i=0;i<11;i++){
		printf("%f ",b[i]);
	}
	printf("\n");
	return 0;
}
