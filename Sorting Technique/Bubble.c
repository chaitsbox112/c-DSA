
#include<stdio.h>
void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int * bubble(int *a,int n)
{
    int i,j,flag,temp;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    
}

int main()
{
    int a[10]={12,1,3,5,6,32,2,7,90,10},n=10;
    bubble(a,n);
     display(a,n);
    return 0;
}