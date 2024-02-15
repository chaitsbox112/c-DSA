#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();//ignore the input buffer in getlin3e function
    while(t--)
    {
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }
}