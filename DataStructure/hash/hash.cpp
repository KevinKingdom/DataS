#include "stdio.h"
#include <iostream>
#include "myhash.h"

using namespace std;

int Init_HashTable(){
	int i;
	count=0;
	size=0;
	Hash_length=hashsize[size];
	elem=new Elemtype[hashsize[size]];
	if(!elem){
		cout<<"内存申请失败"<<"\n";
		exit(0);
	}
	for(i=0;i<size;i++){
		elem[i].key=NULLKEY;
	}
	return 1;
}

void Destroy_HashTable(){
	delete[] elem;
	elem=NULL;
	count=0;
	size=0;
}

unsigned Hash(KeyType k){
	return k%Hash_length;
}

void Collision(int &p;int d){
	p=(p+d)%Hash_length;
}

bool Search_Hash(KeyType k,int &p){
	c=0;









int main(){
	Elemtype r[12]={{17,1},{60,2},{29,3},{38,4},{1,5},{2,6},{3,7},{4,8},{5,9},{6,10},{7,11},{8,12}}; 
	HashTable H;
	int i,p,j;
	KeyType k;
