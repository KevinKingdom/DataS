#include "stdio.h"
#include "stdlib.h"
#include <iostream>

using namespace std;

void BucketSort(double *a,int n){
	typedef struct Node{
		double key;
		struct Node *next;
	}Node;
	typedef struct{
		Node *next;
	}Head;
	int i,j;
	Head head[10]={NULL};
	Node *p;	
	Node *q;

	for(i=1;i<=n;i++){
		Node *node=new Node;
		node->key=a[i];
		node->next=NULL;
		p=q=head[(int)(a[i]*10)].next;
		if(p==NULL){
			head[(int)(a[i]*10)].next=node;
			continue;
		}
		while(p){
			if(node->key < p->key)
				break;
			q=p;
			p=p->next;
		}
		if(p==NULL){
			q->next=node;
		}
		else{
			node->next=p;
			q->next=node;
		}
	}
	j=1;
	for(i=0;i<10;i++){
		p=head[i].next;
		while(p){
			a[j]=p->key;
			j++;
			p=p->next;
		}
	}
}



			
