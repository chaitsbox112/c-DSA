//Reverse by elements
#include<stdio.h>
#include<stdlib.h>
struct Node *head,*second,*third,*fourth,*fifth;
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
int  count(struct Node *head){
int count = 0;
while(head != NULL){
count++;
head = head->next;
}
return count;
}

void reverse_element(struct Node *head){
struct Node *ptr = head;
int *a = (int *) malloc(sizeof(int)*count(head));
int i = 0;
while(ptr != NULL){
a[i] = ptr->data;
ptr = ptr->next;
i++;
}
ptr = head;
i--;
while(ptr != NULL){
ptr->data = a[i];
ptr = ptr->next;
i--;
}
}

void reverse_links(struct Node *p){
struct Node *q,*r;
r = NULL;
q = NULL;
// p = head;
while(p != NULL){
r = q;
q = p;
p = p->next;
q->next = r;
}
head = q;
}

int main(){
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

// reverse_element(head);
reverse_links(head);
display(head);
free(head);

    return 0;
}