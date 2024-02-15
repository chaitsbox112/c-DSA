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
for(i =0; i<ar->length; i++){
printf("%d ",ar->arr[i]);
}
printf("\n");
}
void max(struct array *ar){
int i,maximum;
maximum = ar->arr[0];
for(i = 1; i<ar->length; i++){
if(maximum < ar->arr[i]){
maximum = ar->arr[i];
}
}
printf("Maximum = %d\n",maximum);
}
void min(struct array *ar){
int i, minimum;
minimum = ar->arr[0];
for(i =1; i<ar->length; i++){
if(minimum > ar->arr[i]){
minimum = ar->arr[i];
}
}
printf("Minimum = %d\n",minimum);
}
void avg(struct array *ar){
int i,average,sum = 0;
for(i = 1; i<ar->length; i++){
sum += ar->arr[i];
}
average = sum/ar->length;
printf("Average = %d\n",average);
}

int main(){
struct array ar;
int i;
printf("Enter the size of the array\n");
scanf("%d",&ar.size);
printf("Enter the length of the array\n");
scanf("%d",&ar.length);
ar.arr = (int *) malloc(ar.size * sizeof(int));
printf("Enter %d elements of the array\n",ar.length);
for(i = 0; i<ar.length; i++){
scanf("%d",&ar.arr[i]);
}
display(&ar);
 max(&ar);
 min(&ar);
 avg(&ar);
    return 0;
}