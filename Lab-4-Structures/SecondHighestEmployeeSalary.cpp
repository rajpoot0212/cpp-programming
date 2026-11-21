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
    Employee e[5];
    float highest,second;
    int found=0,index=-1;
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of employee "<<i+1<<endl;
        cout<<"Enter employee ID: ";
        cin>>e[i].id;
        cout<<"Enter name: ";
        cin>>e[i].name;
        cout<<"Enter salary: ";
        cin>>e[i].salary;
    }
    highest=e[0].salary;
    for(int i=1;i<5;i++)
    {
        if(e[i].salary>highest)
            highest=e[i].salary;
    }
    for(int i=0;i<5;i++)
    {
        if(e[i].salary<highest)
        {
            if(found==0 || e[i].salary>second)
            {
                second=e[i].salary;
                index=i;
                found=1;
            }
        }
    }
    if(found==1)
    {
        cout<<"\nSecond Highest Salary Employee"<<endl;
        cout<<"Employee ID: "<<e[index].id<<endl;
        cout<<"Name: "<<e[index].name<<endl;
        cout<<"Salary: "<<e[index].salary<<endl;
    }
    else
        cout<<"\nSecond highest distinct salary does not exist.";
    return 0;
}
