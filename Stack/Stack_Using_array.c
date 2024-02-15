#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
void create(struct stack *st){
st->top = -1;
printf("Enter the size\n");
scanf("%d",&st->size);
st->arr = (int *) malloc(st->size*sizeof(int));
}

int full(struct stack *st){
if(st->top == st->size-1){
return 1;
}
return 0;
}
int empty(struct stack *st){
if(st->top == -1){
return 1;
}
return 0;
}
void push(struct stack *st,int val){
if(full(st)){
printf("Stack overflow\n");
}
else{
st->top++;
st->arr[st->top] = val;
printf("%d\n",st->arr[st->top]);
}

}
int pop(struct stack *st){
    int x = -1;
if(empty(st)){
printf("Stack underflow\n");
}
else{
x = st->arr[st->top--];
}
return x;
}
int peek(struct stack st,int pos){
int x  = -1;
if(st.top-pos+1 < 0){
printf("Invalid position\n");
return x;
}
else{
x = st.arr[st.top-pos+1];
}
return x;
}
int main(){
struct stack st;
create(&st);
push(&st,17);
push(&st,27);
push(&st,37);
push(&st,47);
push(&st,57);
push(&st,6);
printf("\n");

// printf("popped %d\n",pop(&st));
// printf("popped %d\n",pop(&st));
// printf("popped %d\n",pop(&st));
// printf("popped %d\n",pop(&st));
// printf("popped %d\n",pop(&st));
// printf("popped %d\n",pop(&st));
for(int i = 1; i<st.top+2; i++){
printf("position %d => %d\n",i,peek(st,i));
}
return 0;
}
