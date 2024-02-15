#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
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
    rectangle r;
    r.setLength(10);
    r.setBreadth(5);

    cout<<"Length="<<r.getLength()<<endl;
    cout<<"Bredth="<<r.getBreadth()<<endl;   
    cout<<"Area of rectangle="<<r.area()<<endl;
    cout<<"perimeter of rectangle="<<r.perimeter();
}