#include<iostream>
using namespace std;
class Student
{
    string name;
    int rollNumber;
    float marks;
public:
    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNumber;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main()
{
    Student s[5];

    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        s[i].input();
    }

    cout<<"\nAll Students Records"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        s[i].display();
    }

    return 0;
}
