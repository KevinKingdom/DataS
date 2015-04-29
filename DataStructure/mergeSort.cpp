#include "stdio.h"
#define INFINITE 100000
void merge(int *a,int start, int mid, int end){
	int *array1 = new int[mid-start+2];
	int *array2 = new int[end-mid+1];
	
	int i=0;
	for(i=0;i<mid-start+1;i++){
		array1[i]=a[start+i];
	}
	array1[i]=INFINITE;
	
	for(i=0;i<end-mid;i++){
		array2[i]=a[mid+1+i];
	}
	array2[i]=INFINITE;

	int k=0;
	int m=0;
	int n=0;
	for(k=0;k<end-start+1;k++){
		if(array1[m]<array2[n]){
			a[k]=array1[m];
			m++;
			if(array1[m]=INFINITE)
				break;
		}
		else{
			a[k]=array2[n];
			n++;
			if(array2[n]=INFINITE)
				break;
		}
	}
	
	if(array1[m]=INFINITE)
	{
		for(i=0;i<end-start-k;i++)
			a[k+1+i]=array2[n+i];
	}	
	else{
		for(i=0;i<end-start-k;i++)
			a[k+1+i]=array1[m+i];
	}

	delete[] array1;
	delete[] array2;
}

void MergeSort(int *a,int start,int end){
	int mid=(start+end)/2;
	if(start<end){
		MergeSort(a,start,mid);
		MergeSort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}



