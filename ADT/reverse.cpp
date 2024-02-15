#include<stdio.h>
#include<stdlib.h>
typedef struct array
{
    int size;
    int length;
    int *arr;
}A;
void display(A *ar)
{
    
    int i;
    for(i=0;i<ar->length;++i)
    {
        printf("%d ",ar->arr[i]);
    }
}
void create(A *ar)
{

    printf("Enter size of the array\n");
    scanf("%d",&ar->size);
    printf("Enter required number of array\n");
    scanf("%d",&ar->length);
    ar->arr=(int*)malloc(ar->size*sizeof(int));
    printf("Enter numbers");
    for(int i=0;i<ar->length;++i)
    {
        scanf("%d",&ar->arr[i]);
    }
} 
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=*x;
}
void reverse(A *ar)
{
    // A *ar;
    int i,j,temp;
    for(i=0,j=ar->length-1;i<j;++i,--j)
    {
       swap(&ar->arr[i],&ar->arr[j]);
    }
}
int main()
{
    A ar;
    create(&ar);
    display(&ar);
    reverse(&ar);
    display(&ar);
    return 0;
}