#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s_rev;
    for(int i=s.size()-1;i>=0;--i)
    {
        s_rev.push_back(s[i]);
    }
    cout<<s<<endl<<s_rev<<endl;
}