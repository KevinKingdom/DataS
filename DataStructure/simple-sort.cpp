#include "stdio.h"

void SimpleSelectionSort(int *a, int n){
	int i,j,index;
	for(i=0;i<n;i++){
		index=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[index])
				index=j;
		}
		if(index!=i){
			a[i]=a[i]+a[index];
			a[index]=a[i]-a[index];
			a[i]=a[i]-a[index];
		}
	}
}

int main(){
	int a[]={3,5,8,9,1,2,11,4};
	int length=sizeof(a)/sizeof(a[0]);
	SimpleSelectionSort(a,length);
	for(int i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}	
