#include<stdio.h>
#include<stdlib.h>
struct Node *first,*second,*third;
struct Node{
int data;
struct Node *next;
};
void display(struct Node *head){
while(head != NULL){
printf("%d ",head->data);
head = head->next;
}
}
void create(int *a, int n){
int i;
first = (struct Node *) malloc(sizeof(struct Node ));
struct Node *temp,*last;
first ->data = a[0];
first ->next = NULL;
last = first;
for(i = 1; i<=n; i++){
temp = (struct Node*) malloc(sizeof(struct Node ));
temp ->data = a[i];
temp ->next = NULL;
last ->next = temp;
last = temp;
}
}
void create2(int *b, int n){
int i;
second = (struct Node*) malloc(sizeof(struct Node));
struct Node *temp,*last;
second->data = b[0];
second->next = NULL;
last = second;
for(i = 1; i<= n; i++){
temp = (struct Node *) malloc(sizeof(struct Node));
temp->data = b[i];
temp->next = NULL;
last->next = temp;
last = temp;
}
}
void concat(struct Node *first, struct Node *second){
while(first->next != NULL){
first = first->next;
}
first ->next = second;
}

void merge(struct Node *first, struct Node *second){
struct Node *last;
// third = (struct Node *) malloc(sizeof(struct Node));
if(first->data > second->data ){
third = last = second;
second = second->next;
third ->next = NULL;
}
else{
third = last = first;
first = first->next;
third->next = NULL;
}

while(first && second){
if(first->data > second->data){
last ->next = second;
last = second;
second = second->next;
last ->next = NULL;
}
else{
last -> next = first;
last = first;
first = first ->next;
last->next = NULL;

}
}
if(first != NULL){
last ->next = first;
}
else{
last ->next = second;
}
}
int main(){
int a[5] = {10,12,14,16,18};
int b[5] = {11,13,15,17,19};
create(a,5);
create2(b,5);

// printf("After concatenating\n");
// concat(first,second);
// display(first);
// printf("After merging\n");
merge(first,second);
display(third);
free(first);
free(third);
return 0;
}