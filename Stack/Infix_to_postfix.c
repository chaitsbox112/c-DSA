#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
char data;
struct Node *next;
}*top = NULL;
void push(char val){
struct Node *newnode;
newnode = (struct Node*) malloc(sizeof(struct Node));
newnode -> data = val;
newnode -> next = top;
top = newnode;
}
char pop(){
char x;
struct Node *temp;
temp = top;
x = temp->data;
top = top->next;
free(temp);
return x;
}
int isbalance(char *exp){
int i = 0;
for(i = 0; exp[i] != '\0';i++){
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
int  operands(char x){
int i;
if(x == '/' || x == '*'||x == '+'|| x== '-'){
return 0;
}
else{
return 1;
}
}

int pre(char x){
if(x == '+' || x == '-'){
return 1;
}
else if(x == '*' || x == '/'){
return 2;
}
return 0;
}

char * intopost(char * infix){
    int i = 0,j = 0;
char *postfix;
int len = strlen(infix);
postfix = (char*) malloc((len+2)*sizeof(char));
while(infix[i] != '\0'){
if(operands(infix[i]))
postfix[j++] = infix[i++];
else{
if(pre(infix[i]) > pre(top->data))
push(infix[i++]);
else{
postfix[j++] = pop();
}       
}
}
while(top!=NULL)
postfix[j++] = pop();
postfix[j] = '\0';
return postfix;
}

int main(){
char *infix = "a+b*c-d/e";
push('#');
char *postfix = intopost(infix);
printf("%s",postfix);
    return 0;
}
