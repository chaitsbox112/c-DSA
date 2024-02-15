#include<bits/stdc++.h>
using namespace std;
typedef struct array
{
    int a[10];
    int length;
    int size;
}A;
void display(A ar)
{
    int i;
    for(i=0;i<ar.length;++i)
    {
        cout<<ar.a[i]<<" ";
    }
}
A * Union(A *arr1,A *arr2)     //function for union of two array
{
    A *arr3=(A *)malloc(sizeof(A));
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && i<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr1->a[i]>arr2->a[j])
        {
            arr3->a[k++]=arr2->a[j++];
        }
        else
        {
            arr3->a[k++]=arr1->a[i++];
            j++;
        }
    }
    for(;i<arr1->length;++i)
    arr3->a[k++]=arr1->a[i];
    for(;j<arr2->length;++j)
    arr3->a[k++]=arr2->a[j];

    arr3->length=k;
    arr3->size=10;
}
A * Intersection(A *arr1, A *arr2)    // function of intersection of two array
{
    A *arr3 = (A *) malloc(sizeof(A));
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        i++;
        else if(arr2->a[j]<arr1->a[i])
        j++;
        else if(arr2->a[i] == arr1->a[j])
        {
            arr3->a[k++]=arr1->a[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
A * difference(A *arr1, A *arr2)   //function for difference of two array
{
    A *arr3 = (A *)malloc(sizeof(A));
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr1->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr1->a[i]>arr2->a[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for(;i<arr1->length;++i)
    {
        arr3->a[k++]=arr1->a[i];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}
int main()
{
    A arr1={{2,3,6,8,9},5,10};
    A arr2={{2,3,5,7,9},5,10};
    A *arr3;
    arr3 = difference(&arr1,&arr2);
    display(*arr3);
    free(arr3);
}