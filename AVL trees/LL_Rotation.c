#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
}*root;
struct Node *rinsert(struct Node *p,int key)
{
    struct Node *t=NULL;
    if(p==NULL)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=NULL;
        t->rchild=NULL;
        return t;
    }
    if(p->data>key)
    {
        p->lchild=rinsert(p->lchild,key);
    }
    else if(p->data<key)
    {
        p->rchild=rinsert(p->rchild,key);
    }
    return p;
}







