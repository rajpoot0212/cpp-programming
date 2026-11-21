#include<iostream>
using namespace std;
class Employee
{
    int empID,workingHours;
    string name,designation;
    float basicSalary;
public:
    void input()
    {
        cout<<"Enter employee ID: ";
        cin>>empID;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter designation: ";
        cin>>designation;
        cout<<"Enter basic salary: ";
        cin>>basicSalary;
        cout<<"Enter working hours: ";
        cin>>workingHours;
    }
    float allowance()
    {
        return basicSalary*0.20;
    }
    float overtime()
    {
        if(workingHours>8)
            return (workingHours-8)*200;
        return 0;
    }
    float grossSalary()
    {
        return basicSalary+allowance()+overtime();
    }
    float tax()
    {
        return grossSalary()*0.05;
    }
    float netSalary()
    {
        return grossSalary()-tax();
    }
    void display()
    {
        cout<<"\nEmployee ID: "<<empID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Designation: "<<designation<<endl;
        cout<<"Basic Salary: "<<basicSalary<<endl;
        cout<<"Allowance: "<<allowance()<<endl;
        cout<<"Overtime Pay: "<<overtime()<<endl;
        cout<<"Gross Salary: "<<grossSalary()<<endl;
        cout<<"Tax: "<<tax()<<endl;
        cout<<"Net Salary: "<<netSalary()<<endl;
    }
};
int main()
{
    Employee e[5];
    int maxIndex=0;

    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter employee "<<i+1<<" details:"<<endl;
        e[i].input();
    }

    cout<<"\n===== Employee Salary Details ====="<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\nEmployee "<<i+1<<endl;
        e[i].display();

        if(e[i].netSalary()>e[maxIndex].netSalary())
            maxIndex=i;
    }

    cout<<"\n===== Highest Net Salary Employee ====="<<endl;
    e[maxIndex].display();

    return 0;
}
