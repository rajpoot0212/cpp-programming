#include<iostream>
using namespace std;
class Employee
{
    int id;
    string name,designation;
    float basicSalary;
public:
    Employee(int i,string n,string d,float s)
    {
        id=i;
        name=n;
        designation=d;
        if(s>=0)
            basicSalary=s;
        else
            basicSalary=0;
    }
    void setData(int i,string n,string d,float s)
    {
        id=i;
        name=n;
        designation=d;
        if(s>=0)
            basicSalary=s;
        else
            basicSalary=0;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getDesignation()
    {
        return designation;
    }
    float getSalary()
    {
        return basicSalary;
    }
    float calculateAllowance()
    {
        return basicSalary*0.20;
    }
    float grossSalary()
    {
        return basicSalary+calculateAllowance();
    }
    float calculateTax()
    {
        return grossSalary()*0.05;
    }
    float netSalary()
    {
        return grossSalary()-calculateTax();
    }
    void display()
    {
        cout<<"Employee ID: "<<getID()<<endl;
        cout<<"Name: "<<getName()<<endl;
        cout<<"Designation: "<<getDesignation()<<endl;
        cout<<"Basic Salary: "<<getSalary()<<endl;
        cout<<"Allowance: "<<calculateAllowance()<<endl;
        cout<<"Gross Salary: "<<grossSalary()<<endl;
        cout<<"Tax: "<<calculateTax()<<endl;
        cout<<"Net Salary: "<<netSalary()<<endl;
    }
    ~Employee()
    {
        cout<<"Employee object is destroyed"<<endl;
    }
};
int main()
{
    Employee e(1,"saif","Manager",50000);
    e.display();
    return 0;
}
