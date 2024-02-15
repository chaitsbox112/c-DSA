/*
Given array a of N integers. Given Q queries
and in each query given a number X, print
count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

*/


#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];  //array is initialised with0 in global varial
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        hsh[a[i]]++;   //it will increse the elment of array

    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        // int ct=0;  // not require after hasing
        // for(int i=0;i<n;++i)
        // {
        //     if(a[i]==x)
        //     {
        //         ct++;
        //     }
        // }  //we don't require this loop after hashing
        cout<<hsh[x]<<endl;
    }
    /* O(N) + O(Q*N) = O(N^2) = 10^10
      not run in 1 second
      we have to do some pre computation
      */

    //new TC = 2*10^5
    //it will run in 1 seconds

}  