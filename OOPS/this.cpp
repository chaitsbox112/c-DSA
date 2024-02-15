#include<iostream>
using namespace std;
class rectangle 
{
    private:
    int length;
    int breadth;

    public:
    rectangle(int length, int breadth);
    int getLength(){return length;}
    int getBreadth(){return breadth;}

};
int main()
{
    rectangle r(10,5);
    cout<<"Length = "<<r.getLength();
    cout<<"Breadth = "<<r.getBreadth();
}

rectangle :: rectangle(int length,int breadth)
{
    this->length=length;     //(this->) is the pointer to the current or same object it is used                           //         for more clearity or remove ambiguity
    this->breadth=breadth;
}
