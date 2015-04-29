#include "stdio.h"

void StraightInsertSort(int *a,int n){
	int i,j;
	int index;
	for(i=1;i<n;i++){
		index=a[i];
		for(j=i-1;j>=0;j--){
			if(index<a[j]){
				a[j+1]=a[j];
			}
			else
				break;
		}
		a[j+1]=index;
	}
}
			
