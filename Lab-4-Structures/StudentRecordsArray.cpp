#include<iostream>
using namespace std;
struct Student
{
    int rollNumber;
    string name;
    float marks;
};
int main()
{
    Student s[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter details of student "<<i+1<<endl;
        cout<<"Enter roll number: ";
        cin>>s[i].rollNumber;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter marks: ";
        cin>>s[i].marks;
    }
    cout<<"\nStudent Records"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll Number: "<<s[i].rollNumber<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }
    return 0;
}
