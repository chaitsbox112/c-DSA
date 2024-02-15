#include<stdio.h>
#include<stdlib.h>
struct Q{
int size;
int rear;
int front;
int *arr;
};
void create(struct Q *q){
printf("Enter the size of the queue\n");
scanf("%d",&q->size);
q->arr = (int *) malloc(q->size *sizeof(int));
q->front = q->rear= -1;
}
int full(struct Q *q){
if(q->rear == q->size-1){
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
 }   
else{
q->rear++;
q->arr[q->rear] = val;
printf("%d Enqueued successfully\n",val);
}
}
int dequeue(struct Q *q){
int x = -1;
if(empty(q)){
printf("Queue is empty\n");
}
else{
q->front++;
x = q->arr[q->front];
}
return x;
}
int main(){
struct Q q;
create(&q);
enque(&q,10);
enque(&q,20);
enque(&q,30);
enque(&q,40);
enque(&q,50);
enque(&q,560);
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));
printf("%d dequeued\n",dequeue(&q));


    return 0;
}