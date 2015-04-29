#include "stdio.h"
#include <iostream>
using namespace std;
void CountingSort(int *a,int n,int k,int d){
	int *b=new int[n]();
	int *count=new int[k+1]();
	int *c=new int[n]();
	int i=0;
	int index=d;
	for(i=0;i<n;i++){
		b[i]=a[i];
		while(index>1){
			b[i]/=10;
			index--;
		}
		b[i]%=10;
		index=d;
//		cout<<b[i]<<" ";
	
	}
//	cout<<"\n";
	for(i=0;i<n;i++){
		count[b[i]]++;
	}
	for(i=0;i<k;i++){
		count[i+1]+=count[i];
	}
	for(i=n-1;i>=0;i--){
		int j=count[b[i]]-1;
		c[j]=a[i];
		count[b[i]]--;
	}
	for(i=0;i<n;i++){
		a[i]=c[i];
//		cout<<a[i]<<" ";
	}
//	cout<<"\n";
	delete[] b;
	delete[] count;
	delete[] c;
}

void RadixSort(int *a,int n,int d){
	for(int i=1;i<=d;i++){
		CountingSort(a,n,9,i);
	}
}
		
		
			
			
