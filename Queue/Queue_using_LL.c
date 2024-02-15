#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
}*front,*rear;

void enque(int val){
struct Node *newnode;
newnode = (struct Node*) malloc(sizeof(struct Node));
if(newnode == NULL){
printf("Queue is full\n");
}
else{
newnode->data = val;
newnode->next = NULL;
if(front == NULL){
front = rear = newnode;
}
else{
rear->next = newnode;
rear = newnode;
}
}
}

int deque(){
int x = -1;
struct Node *ptr;
if(front == NULL){
printf("Queue is empty\n");
}
else{
ptr = front;
x = front ->data;
front = front->next;
free(ptr);
}
return x;
}

void display(){
struct Node *ptr;
ptr = front;
while(ptr != NULL){
printf("%d ",ptr->data);
ptr = ptr->next;
}
}

int main(){
enque(10);
enque(20);
enque(30);
enque(40);
enque(50);
display();
printf("\n");
printf("%d Dequed successfully\n",deque());
printf("%d Dequed successfully\n",deque());
printf("%d Dequed successfully\n",deque());
printf("%d Dequed successfully\n",deque());
printf("%d Dequed successfully\n",deque());
printf("%d Dequed successfully\n",deque());

    return 0;
}