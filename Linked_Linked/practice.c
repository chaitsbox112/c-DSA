#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;
void create(int *a, int n){
struct Node *temp,*last;
    head = (struct Node *) malloc(sizeof(struct Node));
    head ->data = a[0];
    head -> next = head;
    last = head;
for(int i = 1; i<=n; i++){
temp = (struct Node *) malloc(sizeof(struct Node));
temp -> data = a[i];
temp->next = last->next;
last ->next = temp;
last = temp;
}
}
void display(struct Node *p){
    do{
        printf("%d ",p->data);
    p = p->next;
    }while(p != head);
}

int main(){
int a[5] = {10,12,14,16,18};
create(a,5);
display(head);
    return 0;
}