#ifndef _MYHASH_H_
#define _MYHASH_H_

#include "stdio.h"
#include <iostream>

using namespace std;

typedef int KeyType;
const int NULLKEY=0;
int c=0;

struct Elemtype{
	KeyType key;
	int ord;
}

int hashsize[]={11,19,29,37,47};
int Hash_length;

class HashTable
{
private:
	Elemtype *elem;
	int count;
	int size;
public:
	int Init_HashTable();
	void Destroy_Hashtable();
	unsigned Hash(KeyType);
	void Collision(int &,int);
	bool Search_Hash(KeyType k,int &);
	int Insert_Hash(Elemtype);
	void ReCreate_HashTable();
	void Traverse_HashTable();
	void Get_Data(int);
}

#endif
