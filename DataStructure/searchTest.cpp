#include "stdio.h"
#include <iostream>
#include "binarySearch.cpp"
//#include ""
using namespace std;

int main(){
	int a[]={1,3,6,9,12,13,20,28,33};
	BinarySearch1(a,6,0,8);
	BinarySearch2(a,6,9);
	return 0;
}
