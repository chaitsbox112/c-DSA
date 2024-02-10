#include<stdio.h>
#include<stdlib.h>
struct Node *head;
struct Node{
int data;
struct Node *next;
};
void create(int *a, int n){
int i;
struct Node *temp, *last;
head = (struct Node*) malloc(sizeof(struct Node));
head ->data = a[0];
head->next = head;
last = head;
for(i = 1; i<=n; i++){
temp = (struct Node*) malloc(sizeof(struct Node));
temp ->data = a[i];
temp->next = last ->next;
last ->next = temp;
last = temp;
}
}
void display(struct Node *first){
do{
printf("%d ",first->data);
first = first->next;
}while(first != head);
}

struct Node *inbeg(struct Node *head,int n){
int i,val;
printf("Enter the value for newnode\n");
scanf("%d",&val);
struct Node *ptr = head;
struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
while(ptr->next != head){
ptr = ptr->next;
}
ptr->next = newnode;
newnode->data = val;
newnode->next = head;
head = newnode;
return head;
}

void atpos(struct Node *head){
int val,index,i;
struct Node *ptr,*newnode;
newnode = (struct Node*) malloc(sizeof(struct Node));
ptr = head;
printf("Enter the value of the newnode\n");
scanf("%d",&val);
printf("Enter the index to enter the newnode\n");
fflush(stdin);
scanf("%d",&index);

for(i = 1; i<=index-1; i++){
ptr = ptr->next;
}
newnode->next = ptr->next;
newnode->data = val;
ptr->next = newnode;
}
    
int main(){
int a[5] = {10,13,15,18,30};
create(a,5);
display(head);
head = inbeg(head,5);
display(head);
 atpos(head);
    display(head);
    return 0;
}