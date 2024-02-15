#include<stdio.h>
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void insertion(int a[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1&&a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main()
{
    int a[]={3,4,5,2,1,7,8,9,10,6};
    display(a,10);
    printf("\nAfter insertion sort\n");
    insertion(a,10);
    display(a,10);
    return 0;
}   