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

struct Node *  sortin(struct Node *head){
    int val;
struct Node *q,*ptr = head,*newnode = (struct Node*) malloc(sizeof(struct Node));
printf("Enter the data of the newnode\n");
scanf("%d",&val);
newnode->data = val;
newnode->next = NULL;
if(newnode->data < ptr->data){
    ptr  = newnode;
    newnode ->next = ptr->next;
return head;
}
else{
while(ptr && ptr->data < val){
q = ptr;
ptr = ptr->next;
}
}

q->next = newnode;
newnode ->next = ptr ->next;
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
printf("\n\n");
head = sortin(head);
    display(head);
    return 0;
}