#include<iostream>
using namespace std;
typedef struct array
{
    int length;
    int size;
    int *arr;
}A;
void display(A *ar)
{
    int i;
    for(i=0;i<ar->length;i++)
    {
        cout<<ar->arr[i]<<" ";
    }
}
void create(A *ar)
{
    int i;
    cout<<"Enter length of the array"<<endl;
    cin>>ar->length;
    cout<<"Enter size of the array"<<endl;
    cin>>ar->size;
    ar->arr=(int*)malloc(ar->size*sizeof(int));
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<ar->length;++i)
    {
        cin>>ar->arr[i];
    }
}
void insert(A *ar)
{
    int i=ar->length-1,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(ar->length==ar->size)
    {
        return;
    }
    while(i>0&&ar->arr[i]>n)
    {
        ar->arr[i+1]=ar->arr[i];
        i--;
    }
    ar->arr[i+1]=n;
    ar->length++;
}
void swap(int *y,int *z)
{
    int temp;
    temp=*y;
    *y=*z;
    *z=temp;
}
void reverse(A *ar)
{
    int i,j;
    for(i=0,j=ar->length-1;i<j;++i,--j)
    {
        swap(ar->arr[i],ar->arr[j]);
    }
}   
int main()
{
    A ar;
    create(&ar);
    display(&ar);
    insert(&ar);
    cout<<"After inserting new element"<<endl;
    display(&ar);
    reverse(&ar);
    cout<<"After reversing the array"<<endl;
    display(&ar);
    return 0;
}