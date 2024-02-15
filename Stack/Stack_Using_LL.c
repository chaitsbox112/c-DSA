#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
}*top = NULL;

void push(int val){
struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
if(newnode == NULL){
printf("Stack overflow\n");
}
else{
newnode->data = val;
newnode->next = top;
top = newnode;
}
}

int pop(){
struct Node *temp;
int x = -1;
if(top == NULL){
printf("Stack is empty\n");
}
else{
temp = top;
top = top->next;
x = temp->data;
free(temp);
}
return x;
}
void display(){
    struct Node *p = top;
while(p != NULL){
printf("%d\n",p->data);
p = p->next;
}
}
int main(){
push(12);
push(19);
push(14);
push(18);
display();
printf("popped: %d\n ",pop());
printf("popped: %d\n ",pop());
printf("popped: %d\n ",pop());
printf("popped: %d\n ",pop());
printf("popped: %d\n ",pop());
    return 0;
}