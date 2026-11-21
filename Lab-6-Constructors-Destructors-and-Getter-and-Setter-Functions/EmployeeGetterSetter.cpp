#include<iostream>
using namespace std;
class Employee
{
    int empID;
    string name;
    float salary;
public:
    void setData(int id,string n,float s)
    {
        empID=id;
        name=n;
        salary=s;
    }
    int getID()
    {
        return empID;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
    void display()
    {
        cout<<"\nEmployee ID: "<<getID()<<endl;
        cout<<"Name: "<<getName()<<endl;
        cout<<"Salary: "<<getSalary()<<endl;
    }
};
int main()
{
    Employee e;
    int id;
    string name;
    float salary;

    cout<<"Enter employee ID: ";
    cin>>id;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter salary: ";
    cin>>salary;

    e.setData(id,name,salary);
    e.display();

    return 0;
}
