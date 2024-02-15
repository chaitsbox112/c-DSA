#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle()    //Non parameterized constructor
    {
        length=1;
        breadth=1;
    }

    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void setLength(int l)
    {
        if(length<0)
        {
            length=-1;
        }
        length=l;
    }
    void setBreadth(int b)
    {
        if(breadth<0)
        {
            breadth=-1;
        }
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r(10,5);
    

    cout<<"Length="<<r.getLength()<<endl;
    cout<<"Bredth="<<r.getBreadth()<<endl;   
    cout<<"Area of rectangle="<<r.area()<<endl;
    cout<<"perimeter of rectangle="<<r.perimeter();
}