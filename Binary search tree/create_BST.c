#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;
void insert(int key)
{
    struct Node *t,*p,*r;
    t=root;
    if(root==NULL)
    {
        p = (struct Node*)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
        {
            t=t->lchild;
        }
        else if(key>t->data)
        {
            t=t->rchild;
        }
        else
        {
            return;
        }
    }
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(key<r->data)
    {
        r->lchild=p;
    }
    else if(key>r->data)
    {
        r->rchild=p;
    }
}
void inorder(struct Node *root)
{
    if(root)
    {
        inorder(root->lchild);
        printf("%d ",root->data);
        inorder(root->rchild);
    }
}
int main()
{
    insert(10);
    insert(9);
    insert(11);
    insert(8);
    insert(12);
    insert(1);
    inorder(root);
    return 0;
}


