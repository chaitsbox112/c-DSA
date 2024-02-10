#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};
void display(struct Node *head){
while(head != NULL){
printf("%d ",head->data);
head = head->next;
}
printf("\n");
}

struct Node *inbeg(struct Node *head){
struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
int val;
printf("Enter the value of newnode\n");
scanf("%d",&val);
newnode->next = head->next;
head->next = newnode;
newnode->data = val;
return newnode;
}

struct Node *atpos(struct Node *head){
struct Node *ptr = head,*newnode = (struct Node*) malloc(sizeof(struct Node));
int val,index,i = 0;
printf("Enter the value of newnode\n");
scanf("%d",&val);
printf("Enter the index of newnode\n");
scanf("%d",&index);
while(i != index-2){
ptr = ptr->next;
i++;
}
newnode->next = ptr->next;
newnode->data = val;
ptr->next = newnode;
return head;
}

struct Node *atend(struct Node *head){
struct Node *ptr = head,*newnode = (struct Node*) malloc(sizeof(struct Node));
int val;
printf("Enter the data of newnode\n");
scanf("%d",&val);
while(ptr->next != NULL){
ptr = ptr->next;
}
ptr->next = newnode;
newnode->data = val;
newnode->next = NULL;
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
// head =  inbeg(head);
//  display(head);
//  head = atpos(head);
//  display(head);
head = atend(head);
display(head);

   return 0;
}