#include<iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);

    void setLength(int l);
    void setBreadth(int b);

    int getLength(){return length;}
    int getBreadth(){return breadth;}

    int area();
    int perimeter();

    bool issquare();
    ~rectangle();    //destructor
}; 

int main()
{
    rectangle r(10,10);
    cout<<r.area()<<endl;

    cout<<r.issquare()<<endl;
    
}

rectangle :: rectangle()
{
    length=1;
    breadth=1;
}
 rectangle ::   rectangle(int l,int b)
 {
    if(l<0 && b<0)
    {
        length=-1;
        breadth=-1;
    }
    length=l;
    breadth=b;
 }
  rectangle ::  rectangle(rectangle &r)
  {
    length=r.length;
    breadth=r.breadth;
  }

    void rectangle :: setLength(int l)
    {
        length=l;
    }
    void rectangle :: setBreadth(int b)
{
    breadth=b;
}
    int rectangle :: area()
    {
        return length*breadth;
    }
    int rectangle :: perimeter()
    {
        return 2*(length+breadth);
    }

    bool rectangle :: issquare()
    {
        return length==breadth;
    }
    rectangle :: ~rectangle()
    {
        cout<<"Rectangle destroyed"<<endl;
    }
