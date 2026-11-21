#include<iostream>
using namespace std;
class Student
{
    string name;
    int rollNumber;
    float marks[3];
public:
    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNumber;
        for(int i=0;i<3;i++)
        {
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    float total()
    {
        float sum=0;
        for(int i=0;i<3;i++)
            sum=sum+marks[i];
        return sum;
    }
    float percentage()
    {
        return (total()/300)*100;
    }
    void display()
    {
        cout<<"\nStudent Record"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        for(int i=0;i<3;i++)
            cout<<"Subject "<<i+1<<" Marks: "<<marks[i]<<endl;
        cout<<"Total Marks: "<<total()<<endl;
        cout<<"Percentage: "<<percentage()<<"%"<<endl;
    }
};
int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}
