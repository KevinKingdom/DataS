#include "stdio.h"

void swap(int &a,int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}

void  BubbleSort(int* a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
//	return 0;
}

