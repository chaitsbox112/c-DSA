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
    for(i=0;i<ar->length;++i)
    {
        cout<<ar->arr[i]<<" ";
    }
}
void create(A *ar)
{
    int i;
    cout<<"Enter the size of the array"<<endl;
    cin>>ar->size;
    cout<<"Enter the lenght of the array"<<endl;
    cin>>ar->length;
    ar->arr=(int *)malloc(ar->size*sizeof(int));
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<ar->length;++i)
    {
        cin>>ar->arr[i];
    }   
}
void insert(A *ar)
{
    int i=ar->length-1,n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    if(ar->size==ar->length)
    {
        return;
    }
    else
    {
        while(i>=0&&ar->arr[i]>n)
        {
            ar->arr[i+1]=ar->arr[i];
            --i;
        }   
        ar->arr[i+1]=n;
        ar->length++;
    }
}

//check if array is sorted

int  check(A *ar)
{
    int i;
    for(i=0;i<ar->length-1;++i)
    {
        if(ar->arr[i]>ar->arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    A ar;
    create(&ar);
    display(&ar);
    // insert(&ar);
    // display(&ar);
    cout<<endl<<check(&ar)<<endl;
    return 0;
}