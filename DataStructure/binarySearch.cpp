#include "stdio.h"
#include <iostream>

using namespace std;

//递归方法
void BinarySearch1(int *a,int key,int low,int high){			
	if(low>high){
		cout<<"cannot find this value key"<<"\n";
		return;
	}
	int mid=(low+high)/2;
	if(key==a[mid]){
		cout<<"the value key is in this array "<<mid<<"\n";
		return;
	}
	else if(key<a[mid])
		BinarySearch1(a,key,low,mid-1);
	else
		BinarySearch1(a,key,mid+1,high);
}	

//非递归方法
void BinarySearch2(int *a,int key,int n){
	int low=0;
	int high=n-1;
	int mid=0;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==key){
			cout<<"the value key is in"<<mid<<"\n";
			return;
		}
		else if(a[mid]<key){
			low=mid+1;
		}
		else
			high=mid-1;
	}
	cout<<"cannot find this value key"<<"\n";
}
			
			
