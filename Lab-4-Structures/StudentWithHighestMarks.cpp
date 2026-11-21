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
    int highest=0;
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
    for(int i=1;i<5;i++)
    {
        if(s[i].marks>s[highest].marks)
        {
            highest=i;
        }
    }
    cout<<"\nStudent with Highest Marks"<<endl;
    cout<<"Name: "<<s[highest].name<<endl;
    cout<<"Roll Number: "<<s[highest].rollNumber<<endl;
    cout<<"Marks: "<<s[highest].marks<<endl;
    return 0;
}
