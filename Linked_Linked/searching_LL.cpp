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

void Linsearch(struct Node *head){
struct Node *ptr = head;
int num,count = 0;
printf("\nEnter the number to search\n");
scanf("%d",&num);
while(ptr != NULL){
    count++;
if(num == ptr->data){
printf("\n%d is at position %d",num,count);
return;
}
ptr = ptr->next;
}
printf("Invalid does not exist\n");
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
Linsearch(head);
return 0;
}
