#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};

struct Node *first,*second,*third;


void create1(int *a, int n){
struct Node *temp,*last;
int i;
first = (struct Node*) malloc(sizeof(struct Node));
first ->data = a[0];
first ->next = NULL;
last = first;
for(i = 1; i<= n; i++){
temp = (struct Node*) malloc(sizeof(struct Node));
temp ->data = a[i];
temp ->next = NULL;
last ->next = temp;
last = temp;
}
}

void create2(int *b, int n){
struct Node *temp,*last;
int i;
second = (struct Node*) malloc(sizeof(struct Node));
second ->data = b[0];
second -> next = NULL;
last = second;
for(i =1; i<=n; i++){
temp = (struct Node*) malloc(sizeof(struct Node));
temp ->data = b[i];
temp->next = NULL;
last ->next = temp;
last = temp;
}
}

void display(struct Node *first){
while(first != NULL){
printf("%d ",first->data);
first = first->next;
}
}

void concat(struct Node *first, struct Node *second){
while(first->next != NULL){
first = first->next;
}
first->next = second;
}

void merge(struct Node *p, struct Node *q){
 struct Node *last;
if(p->data < q->data){
third = last = p;
p = p->next;
third->next = NULL;
}
else{
third = last = q;
q = q->next;
third -> next = NULL;
}
while(p && q){
if(p->data < q->data){
last->next = p ;
last = p ;
p = p ->next;
last ->next = NULL;
}
else{
last->next = q;
last = q;
q = q->next;
last ->next = NULL;
}
}
if(p){
last->next = p;
p->next = NULL;
}
if(q){
last -> next = q;
q ->next = NULL;
}
}

int main(){
int a[5] = {10,14,16,18,20};
int b[5] = {11,13,15,28,30};
    create1(a,5);
    create2(b,5);
// display(first);
//  concat(first,second);
//  display(first);
     merge(first,second);
    display(third); 
    return 0;
}