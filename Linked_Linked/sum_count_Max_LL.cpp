#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
void count(struct Node *head){
struct Node *ptr = head;
int count = 0;
while(ptr != NULL){
count++;
ptr = ptr->next;
}
printf("Total Nodes are = %d\n",count);
}


void sum(struct Node *head){
struct Node *ptr = head;
int sum = 0;
while(ptr != NULL){
sum += ptr->data;
ptr = ptr->next;
} 
printf("Sum = %d\n",sum);
}


void maximum(struct Node *head){
struct Node *ptr = head;
int max = -32767;
while(ptr != NULL){
if(max < ptr->data){
max = ptr->data;
ptr = ptr->next;
}
}
printf("Maximum = %d\n",max);
}

int main(){
struct Node *head,*second,*third,*fourth,*fifth;
head = (struct Node *) malloc(sizeof(struct Node));
second = (struct Node *) malloc(sizeof(struct Node));
third = (struct Node *) malloc(sizeof(struct Node));
fourth = (struct Node *) malloc(sizeof(struct Node));
fifth = (struct Node *) malloc(sizeof(struct Node));
   
head->data =10;
head->next = second;

second->data = 15;
second->next = third;

third->data = 18;
third->next = fourth;

fourth->data =19;
fourth->next = fifth;

fifth->data = 33;
fifth->next = NULL;

// display(head);
// recdisplay(head);
//  count(head);
// sum(head);
maximum(head);
 free(head);
    return 0;
}