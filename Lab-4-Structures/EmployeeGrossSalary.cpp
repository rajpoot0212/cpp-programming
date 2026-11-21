#include<iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    float basicSalary,allowance;
};
int main()
{
    Employee e;
    float grossSalary;
    cout<<"Enter employee ID: ";
    cin>>e.id;
    cout<<"Enter employee name: ";
    cin>>e.name;
    cout<<"Enter basic salary: ";
    cin>>e.basicSalary;
    cout<<"Enter allowance: ";
    cin>>e.allowance;
    grossSalary=e.basicSalary+e.allowance;
    cout<<"\nEmployee Information"<<endl;
    cout<<"ID: "<<e.id<<endl;
    cout<<"Name: "<<e.name<<endl;
    cout<<"Basic Salary: "<<e.basicSalary<<endl;
    cout<<"Allowance: "<<e.allowance<<endl;
    cout<<"Gross Salary: "<<grossSalary<<endl;
    return 0;
}
