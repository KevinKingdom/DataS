#include "stdio.h"
#include <iostream>
#include "string.h"

using namespace std;

int LastLength(char *s){
	int size=strlen(s);
	cout<<size<<"\n";
	if(size==0)
		return 0;
	int num=0;
	for(int i=0;i<size;i++){
		if(s[i]==' ')
			num=0;
		else
			num++;
		cout<<num<<" ";
	}
	return num;
}

int main(){
	char *s="hello world";
	int count=LastLength(s);
	cout<<count<<"\n";
	return 0;
}
