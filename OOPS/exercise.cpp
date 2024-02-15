#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    float math;
    float science;
    float english;

    public:
    string getName(){return name;}
    int getroll(){return roll;}
    int getTotal(){return math+science+english;}
    student(string n,int r,float m,float s,float e);
    char grade();
};
int main()
{
    student s("Chaitanya",03,90,88,98);
    cout<<"Name = "<<s.getName()<<endl<<"Roll no. = "<<s.getroll()<<endl;
    cout<<"Total = "<<s.getTotal()<<endl;    
    cout<<"Grade = "<<s.grade()<<endl;
}
student :: student(string n,int r,float m,float s,float e)
{
    name=n;
    roll=r;
    math=m;
    science=s;
    english=e;
}

char student :: grade()
{
    float total=0;
    total=math+science+english;
    float per=(total/300)*100;
    if(per>=33 && per<50)
    {
        return 'C';
    }
    else if(per>=50 && per<60)
    {
        return 'B';
    }
    else if(per>=60)
    {
        return 'A';
    }
    else 
    {
        return 'F';
    }
}

