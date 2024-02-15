#include<iostream>
using namespace std;
class base
{
    public:
    base(){cout<<"Non param Base"<<endl;}
    base(int x){cout<<"Param of base"<<" "<<x<<endl;}
};
class derived:public base
{
    public:
    derived(){cout<<"Non param derived class"<<endl;}
    derived(int x){cout<<"param of derived"<<" "<<x<<endl;}
    derived(int x,int y) : base(x)     // : base(x) this will paas value of x to the base class constructor
    {
        cout<<"param of derived"<<" "<<x<<endl;
    }

};
int main()
{
    derived d(10,20);
}