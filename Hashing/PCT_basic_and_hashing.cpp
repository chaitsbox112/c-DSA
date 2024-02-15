// Pre competetive technique basic and hashing
/*
Given T test cases and in each 
test case a number N. print its factorial 
for each test case % M 
where M = 10^9+7

constraints
1<= T <= 10^5
1<= N <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];  

int main()
{
    fact[0]=fact[1] = 1;
    for(int i=2;i<N;++i)
    {
        fact[i] = fact[i-1] * i;
    }
    int t;
    cin>>t;
    while(t--)
    {    
        int n;
        // long long fact=1; not required after precomputation
        cin>>n;
        // for(int i=2;i<=n;++i)
        // {
        //     fact=(fact*i) % M;  //not require after precomputation 
        // }
        cout<<fact[n]<<endl;
    }
    /*time complexity = 10^10
    it will not run in online  compiler if 
    it should run in 1 sec but it will not
    run in 1 sec*/ 

    /*solution is precalculate all the
     upto 10^5*/
} 

//O(T*N) = 10^10 old complexity
//O(N) + O(T) = 10^5+10^5