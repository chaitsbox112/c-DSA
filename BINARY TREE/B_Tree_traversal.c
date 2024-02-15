#include"tree.h"
#include<stdio.h>
#include<stdlib.h>
struct Node *root;
void Tcreate(){
    struct Node *p,*t;
    int x;
struct Q q;
create(&q,100);
printf("Enter the data for root\n");
scanf("%d",&x);
root = (struct Node*) malloc(sizeof(struct Node));
root->data = x;
root->lchild = root->rchild = NULL;
enque(&q,root);
while(!empty(&q)){
p = deque(&q);
printf("Enter the left child of %d\n",p->data);
scanf("%d",&x);
if(x != -1){
t = (struct Node*) malloc(sizeof(struct Node));
t->data = x;
t->lchild = t->rchild = NULL;
p->lchild = t;
enque(&q,t);
}
printf("Enter the right child of %d\n",p->data);
scanf("%d",&x);
if(x != -1){
t = (struct Node*) malloc(sizeof(struct Node));
t->data = x;
t->lchild = t->rchild = NULL;
p->rchild = t;
enque(&q,t);
}
}
}

void preorder(struct Node *p){
if(p){
printf("%d ",p->data);
preorder(p->lchild);
preorder(p->rchild);
}
}

void postorder(struct Node *p){
if(p){
postorder(p->lchild);
postorder(p->rchild);
printf("%d ",p->data);
}
}

void inorder(struct Node *p){
if(p){
inorder(p->lchild);
printf("%d ",p->data);
inorder(p->rchild);
}
}

void levelorder(struct Node *root){
struct Q q;
create(&q,100);
printf("%d ",root->data);
enque(&q,root);
while(!empty(&q)){
root = deque(&q);
if(root->lchild){
printf("%d ",root->lchild->data);
enque(&q,root->lchild);
}
if(root->rchild){
printf("%d ",root->rchild->data);
enque(&q,root->rchild);
}
}
}

int count(struct Node *root){
if(root){
return count(root->lchild) + count(root->rchild) + 1;
}
return 0;
}

int height(struct Node *root){
int x = 0,y = 0;
if(root == 0){
return 0;
}
x = height(root->lchild);
y = height(root->rchild);
if(x > y){
return x+1;
}
else{
return y+1;
}
}

int sum(struct Node *root){
int x = 0;
int y = 0;
if(root){
x = sum(root->lchild);
y = sum(root->rchild);
return x+y+root->data;
}
}

int main(){
Tcreate();
// preorder(root);
// inorder(root);
// postorder(root);
// levelorder(root);
printf("Total node of tree is %d\n",count(root));
printf("Height of tree is %d\n",height(root));
 printf("sum of all node is %d\n",sum(root));
 
 
    return 0;
}