include "stdio.h"
#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

typedef struct node{
	char data;
	struct node *lchild;
	struct node *rchild;
}BinTree;

typedef struct node1
{
    BinTree *btnode;
    bool isFirst;
}BTNode;


void creatBinTree(char *s,BinTree *&root)  //创建二叉树，s为形如A(B,C(D,E))形式的字符串 
{
    int i;
    bool isRight=false;
    stack<BinTree*> s1;          //存放结点 
    stack<char> s2;              //存放分隔符
    BinTree *p,*temp;
    root->data=s[0];
    root->lchild=NULL;
    root->rchild=NULL;
    s1.push(root);
    i=1;
    while(i<strlen(s))
    {
        if(s[i]=='(')
        {
            s2.push(s[i]);
            isRight=false;
        }    
        else if(s[i]==',')    
        {
            isRight=true;
        }
        else if(s[i]==')')
        {
            s1.pop();
            s2.pop();
        }
        else if(isalpha(s[i]))
        {
            p=(BinTree *)malloc(sizeof(BinTree));
            p->data=s[i];
            p->lchild=NULL;
            p->rchild=NULL;
            temp=s1.top();
            if(isRight==true)    
            {
                temp->rchild=p;
                cout<<temp->data<<"的右孩子是"<<s[i]<<endl;
            }
            else
            {
                temp->lchild=p;
                cout<<temp->data<<"的左孩子是"<<s[i]<<endl;
            }
            if(s[i+1]=='(')
                s1.push(p);
        }
        i++;
    }    
}

void display(BinTree *root)        //显示树形结构 
{
    if(root!=NULL)
    {
        cout<<root->data;
        if(root->lchild!=NULL)
        {
            cout<<'(';
            display(root->lchild);
        }
        if(root->rchild!=NULL)
        {
            cout<<',';
            display(root->rchild);
            cout<<')';
        }
    }
}

void preOrder1(BinTree *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preOrder1(root->lchild);
		preOrder1(root->rchild);
	}
}

void preOrder2(BinTree *root){
	stack<BinTree *> s;
	BinTree *p=root;
	while(p!=NULL || !s.empty()){
		while(p!=NULL){
			cout<<p->data<<" ";
			s.push(p);
			p=p->lchild;
		}
		if(!s.empty()){
			p=s.top();
			s.pop();
			p=p->rchild;
		}
	}
}

void postOrder2(BinTree *root){

}

int depth(BinTree *root){
	int ldepth,rdepth;
	if(!root)
		return 0;
	else{
		ldepth=depth(root->lchild);
		rdepth=depth(root->rchild);
		return ldepth>rdepth? ldepth+1,rdepth+1;
	}
} 	

















