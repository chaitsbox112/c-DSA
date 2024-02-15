#include<stdio.h>
#include<stdlib.h>
struct array{
int length;
int size;
int *arr;
};
void display(struct array *ar){
int i;
printf("Stored elements are\n");
for(i = 0; i<ar->length; i++){
printf("%d ",ar->arr[i]);
}
}
void linsearch(struct array *ar){
int num,i,head;
printf("Enter the number to search in the array\n");
scanf("%d",&num);
for(i = 0; i<ar->length; i++){
if(num == ar->arr[i]){
printf("%d found at %d position\n",num,head);
return;
}
}
printf("%d not exist\n");
return;
}
int main(){
struct array ar;
int i;
printf("Enter the size of the array\n");
scanf("%d",&ar.size);
printf("Enter the length of the array\n");
scanf("%d",&ar.length);
ar.arr = (int *) malloc(ar.size * sizeof(int));
printf("Enter %d elements\n",ar.length);
for(i = 0; i<ar.length; i++){
scanf("%d",&ar.arr[i]);
}
display(&ar);
 linsearch(&ar);
    return 0;
}