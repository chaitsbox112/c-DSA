#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
void display(struct Node *head){
struct Node *ptr = head;
printf("Stored data are\n");
while(ptr != NULL){
printf("%d ",ptr->data);
ptr = ptr->next;
}
}

struct Node *atbeg(struct Node *head){
struct Node *ptr = head;
head = head ->next;
free(ptr);
return head;
}

struct Node *atpos(struct Node *head){
    int index,i = 0;
struct Node *ptr = head, *q = head->next;
printf("Enter the index to delete\n");
scanf("%d",&index);

while( i != index -2){
ptr = ptr->next;
q = q->next;
i++;
}
ptr ->next = q->next;
free(q);
return head;
}

struct Node *atend(struct Node *head){
struct Node *ptr = head, *q = head->next;
while(q->next != NULL){
ptr = ptr->next;
q = q ->next;
}
ptr ->next = NULL;
free(q);
return head;
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

display(head);
// head = atbeg(head);
// display(head);

// head = atpos(head);
// display(head);
 
 head = atend(head);
 display(head);
    return 0;
}