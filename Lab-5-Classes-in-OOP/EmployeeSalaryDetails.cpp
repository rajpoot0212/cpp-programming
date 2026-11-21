#include<iostream>
using namespace std;
class Employee
{
    int id;
    string name;
    float basicSalary,allowance,grossSalary,netSalary;
public:
    void input()
    {
        cout<<"Enter employee ID: ";
        cin>>id;
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter basic salary: ";
        cin>>basicSalary;
    }
    void calculateAllowance()
    {
        allowance=basicSalary*0.20;
    }
    void calculateGross()
    {
        grossSalary=basicSalary+allowance;
    }
    void calculateNet()
    {
        netSalary=grossSalary;
    }
    void display()
    {
        cout<<"\nEmployee Salary Details"<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Basic Salary: "<<basicSalary<<endl;
        cout<<"Allowance: "<<allowance<<endl;
        cout<<"Gross Salary: "<<grossSalary<<endl;
        cout<<"Net Salary: "<<netSalary<<endl;
    }
};
int main()
{
    Employee e;
    e.input();
    e.calculateAllowance();
    e.calculateGross();
    e.calculateNet();
    e.display();
    return 0;
}
