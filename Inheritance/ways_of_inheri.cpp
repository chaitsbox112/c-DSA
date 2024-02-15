#include<iostream>
using namespace std;
class parent
{
    
    private: int a;
    protected: int b;
    public: int c;

    void funParent()
    {
        int a=10;
        int b=3;
        int c=5;
    }                // all are accessable within parent calss
};
class child : public parent
{
    void funChild()
    {
        //int a=10;    //only private member will not accessable
        int b=3;
        int c=5;
    }
};
class grandchild : public child
{
    void fungrandchild()
    {
        int a=10;
        int b=3;
        int c=5;
    }
};
int main()
{
    
}