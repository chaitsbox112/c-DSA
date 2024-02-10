// // Binary search with itrattive function
// #include<stdio.h>
// #include<stdlib.h>
// struct array{
// int length;
// int size;
// int *arr;
// };
// void display(struct array *ar){
// int i;
// for(i =0; i<ar->length; i++){
// printf("%d ",ar->arr[i]);
// }
// }
// void binsearch(struct array *ar){
// int i,low,high,mid,num;
// printf("\nEnter the element to search\n");
// scanf("%d",&num);
//  low = 0;
//  high = ar->length-1;
//  while(low < high){
//  mid = (low + high) / 2;
//  if(num == ar->arr[mid]){
// printf("%d found at position %d\n",num,ar->arr[mid]);
//  return;
//  }
//  else if(num > ar->arr[mid]){
//  low = mid+1;
//  }
//  else if(num < ar->arr[mid]){
//  high = mid-1;
//  }
//  }
// printf("%d not exist\n");
// }
// int main(){
//     struct array ar;
//     int i;
// printf("Enter the size of the array\n");
// scanf("%d",&ar.size);
//     printf("\nEnter the length of the array\n");
//     scanf("%d",&ar.length);
//     ar.arr = (int *) malloc(ar.size * sizeof(int));
//     printf("\nEnter the elements of the arrray\n");
//     for(i = 0; i<ar.length; i++){
// scanf("%d",&ar.arr[i]);
//     }
//     display(&ar);
//  binsearch(&ar);
//     return 0;
// }


