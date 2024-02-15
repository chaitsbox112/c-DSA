#include<stdio.h>
#include<stdlib.h>
struct Node{
char data;
struct Node *next;
}*top;
void push(char val){
struct Node *newnode = (struct Node *) malloc(sizeof(struct Node));
if(newnode == NULL){
printf("Stack overflow\n");
}
newnode->data = val;
newnode -> next = top;
top = newnode;
}
char pop(){
struct Node *temp = top;
char x = -1;
if(top == NULL){
printf("Stack is empty\n");
}
else{
top = top->next;
x = temp -> data;
 free(temp);
 return x;
}
}
int isbalance(char *exp){
int i;
for(i = 0; exp[i] != '\0'; i++){
if(exp[i] == '('){
push(exp[i]);
}
else if(exp[i] == ')'){
if(top == NULL){
return 0;
}
else{
pop();
}
}
}
if(top == NULL){
return 1;
}
else{
return 0;
}
}
int main(){
char *exp = "((a+b) * (c+d))";
printf("%d ",isbalance(exp));
    return 0;
}








