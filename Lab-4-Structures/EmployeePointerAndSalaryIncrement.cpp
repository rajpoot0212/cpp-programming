
#include<iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    float salary;
};
int main()
{
    Employee e;
    Employee *ptr=&e;
    cout<<"Enter employee ID: ";
    cin>>ptr->id;
    cout<<"Enter employee name: ";
    cin>>ptr->name;
    cout<<"Enter employee salary: ";
    cin>>ptr->salary;
    cout<<"\nEmployee Information"<<endl;
    cout<<"ID: "<<ptr->id<<endl;
    cout<<"Name: "<<ptr->name<<endl;
    cout<<"Salary: "<<ptr->salary<<endl;
    ptr->salary=ptr->salary+(ptr->salary*0.10);
    cout<<"\nUpdated Salary: "<<ptr->salary<<endl;
    return 0;
}
