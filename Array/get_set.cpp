//Program to Get the Element to the given index
#include<stdio.h>
#include<stdlib.h>
struct array{
int length;
int size;
int *arr;
};
void display(struct array *ar){
int i;
for(i = 0; i<ar->length; i++){
printf("%d ",ar->arr[i]);
}
}
void get(struct array ar){
int i,n;
printf("Enter index to get its element\n");
scanf("%d",&n);
for(i = 0; i<ar.length; i++){
if(n >= 0 && n < ar.length){
printf("Element at index %d = %d\n",n,ar.arr[n]);
break;
}
}
printf("Invalid index\n");
}

void set(struct array *ar){
int i,val,index;
printf("Enter the value\n");
scanf("%d",&val);
printf("Enter the index\n");
scanf("%d",&index);
for(i = 0; i<ar->length; i++){
if(index >= 0 && index < ar->length){
ar->arr[index] = val;
break;
}
}
printf("Invalid index\n");
}
int main(){
struct array ar;
int i;
printf("Enter the size of the array\n");
scanf("%d",&ar.size);
printf("Enter the length of the array\n");
scanf("%d",&ar.length);
ar.arr = (int *) malloc(ar.size * sizeof(int));
printf("Enter %d elements of array\n",ar.length);
for(i = 0; i<ar.length; i++){
scanf("%d",&ar.arr[i]);
}
// get(ar);
printf("Elements of array before set any element\n");
display(&ar);

set(&ar);
printf("Elements of array after set element\n");
display(&ar);
    return 0;
}


