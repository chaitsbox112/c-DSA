#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Q
{
    int size;
    int rear;
    int front;
    struct Node **arr;
};
void create(struct Q *ptr,int s)
{
    ptr->size = s;                    
    ptr->front = ptr->rear = 0;
    ptr->arr = (struct Node**) malloc(ptr->size+1 * sizeof(struct Node*));
}
int full(struct Q *ptr)
{
    if((ptr->rear+1) % ptr->size == ptr->front){
    return 1;
}
else
{
    return 0;
}
}
int empty(struct Q *ptr){
if(ptr->front == ptr->rear)
{
    return 1;
}
else
{
    return 0;
}
}
    
void enque(struct Q *ptr,struct Node *val){
if(full(ptr)){
printf("Queue is full\n");
} 
else
{
    ptr->rear = (ptr->rear+1) % ptr->size;
    ptr->arr[ptr->rear] = val;
}
}
struct Node * deque(struct Q *ptr)
{
    struct Node *x = NULL;
    if(empty(ptr)){
    printf("Queue is empty\n");
}
else
{
    ptr->front = (ptr->front+1) % ptr->size;
    x = ptr->arr[ptr->front];
}
return x;
}
