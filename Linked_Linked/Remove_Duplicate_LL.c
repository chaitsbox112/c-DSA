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

struct Node * Remove(struct Node *head){
struct Node *p = head, *q = head->next;
while(q != NULL){
if(p->data != q ->data){
p = q;
q = q->next;
}
else{
p->next = q->next;
free(q);
q = p->next;
}
}
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

fourth->data =33;
fourth->next = fifth;

fifth->data = 33;
fifth->next = NULL;

display(head);
head = Remove(head);
display(head);


    return 0;
}