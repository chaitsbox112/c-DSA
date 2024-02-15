#include<iostream>
using namespace std;
typedef struct  array
{
    int ar[10];
    int size;
    int length;
    
}A;
void display(A a)
{
    int i;
    for(i=0;i<a.length;++i)
    {
        cout<<a.ar[i]<<" ";
    }
}
A* merge(A *arr,A *arr1)
{
    A *arr2=(A *)malloc(sizeof(A));
    int i,j,k;
    i=j=k=0;
    while(i<arr->length && j<arr1->length)
    {
        if(arr->ar[i]<arr1->ar[j])
        {
            arr2->ar[k++]=arr->ar[i++];
        }
        else
        {
            arr2->ar[k++]=arr1->ar[j++];
        }
    }
    for(; i<arr->length;++i)
    {
        arr2->ar[k++]=arr->ar[i];
    } 
    for(; j<arr1->length;j++)
    {
        arr2->ar[k++]=arr1->ar[j];
    }
    arr2->length=arr->length+arr1->length;
    arr2->size = 10;
    return arr2;    
}
int main()
{
    A arr={{5,6,7,9,10},10,5};
    A arr1{{1,2,3,4,5},10,5};
    A *arr3;
    arr3 = merge(&arr,&arr1);
    display(*arr3);

    return 0;
}
