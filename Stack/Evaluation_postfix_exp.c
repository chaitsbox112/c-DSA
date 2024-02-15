#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
}*top = NULL;

void push(int val){
struct Node *newnode;
newnode = (struct Node*) malloc(sizeof(struct Node));
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
    int x=-1;
struct Node *temp;
if(top == NULL){
printf("Stack is empty\n");
}
else{
temp = top;
top = top->next;
x = temp->data;
free(temp);
return x;
}
}

int operand(char x){
if(x == '*' || x == '/' || x == '+' || x == '-'){
return 0;
}

return 1;

}

int eval(char *postfix){
int i;
int x1,x2,r;
for(i = 0; postfix[i] != '\0'; i++){
if(operand(postfix[i])){
push(postfix[i] - '0');
}
else{
x2 = pop();
x1 = pop();
switch(postfix[i]){
case '+': r = x1 + x2; break;
case '-': r = x1 - x2; break;
case '*': r = x1 * x2; break;
case '/': r = x1 / x2; break;
}
push(r);
}

}
return top->data;
} 

int main(){
char *postfix = "234*+82/-";
printf("%d",eval(postfix));
    return 0;
}