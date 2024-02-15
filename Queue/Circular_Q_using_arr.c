#include<stdio.h>
#include<stdlib.h>
struct Q{
int size;
int front;
int rear;
int *arr;
};
void create(struct Q *q,int n){
q->size = n;
q->arr = (int*) malloc(q->size*sizeof(int));
q->front = q->rear = 0;
}

int full(struct Q *q){
if((q->rear+1) % q->size == q->front){
return 1;
}
return 0;
}

int empty(struct Q *q){
if(q->front == q->rear){
return 1;
}
return 0;
}

void enque(struct Q *q,int val){
if(full(q)){
printf("Queue is full\n");
// return;
}
else{
q->rear = (q->rear+1) % q->size;
q->arr[q->rear] = val;
printf("%d Enqued successfully\n",val);
}
}

int deque(struct Q *q){
int x = -1;
if(empty(q)){
printf("Queue is empty\n");
}
else{
q->front = (q->front+1) % q->size;
x = q->arr[q->front];
}
return x;
}

int main(){
struct Q q;
create(&q,3);
enque(&q,10);
enque(&q,20);
enque(&q,30);
enque(&q,40);
 printf("%d dequed\n",deque(&q));
printf("%d dequed\n",deque(&q));
printf("%d dequed\n",deque(&q));
printf("%d dequed\n",deque(&q));   
    
    return 0;
}