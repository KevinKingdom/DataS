#include "stdio.h"
#include <iostream>

using namespace std;

typedef struct tagNode{
	int value;
	struct tagNode *left;
	struct tagNode *right;
}treeNode;

void displayTree(treeNode *node){
	if(node==NULL)
		return;
	if(node->left!=NULL)
		displayTree(node->left);
	cout<<node->value<<" ";
	if(node->right!=NULL)
		displayTree(node->right);
}

treeNode *searchTree(treeNode *node,int value){
	if(node->value==value)
		return node;
	else if(node->value>value){
		if(node->left!=NULL)
			return searchTree(node->left,value);
		else
			return NULL;
	}
	else{
		if(node->right!=NULL)
			return searchTree(node->right,value);
		else
			return NULL;
	}
}
void insertNode(treeNode *node,treeNode *inode){
	if((inode->value>=node->value)&&(node->right!=NULL)){
		insert(node->right,inode);
		return;
	}
	else if((inode->value<node->value)&&(node->left!=NULL)){
		insert(node->left,inode);
		return;
	}
	else if((inode->value>=node->value)&&(node->right==NULL)){
		node->right=ionde;
		return;
	}
	else{
		node->left=inode;
		return;
	}
}

void createTree(treeNode **root,int *a,int size){
	*root=new treeNode;
	int i=0;
	for(i=0;i<size,i++){
		
		
		

void creatTree(treeNode **node,int *a,int n){

}


