//program for Class for employee
//Derived class
//Salary for full time employee
//Wages for part time employee

#include<iostream>
using namespace std;
class employee
{
    private:
    int eid;
    string name;

    public:
    employee(int e,string n)
    {
        eid=e;
        name=n;
    }

    string getName(){return name;}
    int getEid(){return eid;}
};
class fulltimeemployee : public employee
{
    private:
    int salary;
    
    public:
    fulltimeemployee(int e,string n,int sal) : employee(e,n)
    {
        salary=sal;
    }
    int getSalary(){return salary;}
};

class parttimeemployee : public employee
{
    private:
    int wage;

    public:
    parttimeemployee(int e,string n,int sal) : employee(e,n)
    {
        wage=sal;
    }
    int getWage(){return wage;}
};

int main()
{
    fulltimeemployee e1(1,"John",9000);
    fulltimeemployee e2(2,"Mike",10000);

    cout<<"Employee id = "<<e1.getEid()<<endl;
    cout<<"Employee name ="<<e1.getName()<<endl;
    cout<<"Salary = "<<e1.getSalary()<<endl;

}
