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
void add(struct array *ar){
int val;
printf("Enter the value to add\n");
scanf("%d",&val);
ar->arr[ar->length] = val;
ar->length++;
}

void addindex(struct array *a){
int i,index,val;
printf("Enter the index postion of new element\n");
scanf("%d",&index);
printf("Enter the value \n");
scanf("%d",&val);
for(i = a->length; i<=index; i--){
if(index > a->size){
printf("Invalid index\n");
return ;
}
else{
a->arr[i] = a->arr[i-1];
}
}
a->arr[index] = val;
// a->length++;
}
void Delete(struct array *ar){
int i,index;
printf("\nEnter the index to delete\n");
scanf("%d",&index);
if(index > 0 && index < ar->length){
for(i = index; i<ar->length; i++){
ar->arr[i] = ar->arr[i+1];
}
ar->length--;
printf("Index %d deleted successfully\n",index);
}
else{
  printf("Invalid index \n");
return;
}
}
int main(){
struct array a;
int n,i;
printf("Enter the size of the array\n");
  scanf("%d",&n);
  a.arr = (int *) malloc(n * sizeof(int));
  printf("Enter the length of array\n");
  scanf("%d",&a.length);
  printf("Enter %d element in array\n",a.length);
  for(i = 0; i<a.length; i++){
   scanf("%d",&a.arr[i]);
  }
  display(&a);
//    add(&a);
//  display(&a);
//   addindex(&a);
//  display(&a);
 Delete(&a);
 display(&a);
  return 0;
}