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
    int n;
    cout<<"How many students? ";
    cin>>n;
    Student *s=new Student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        cout<<"Enter roll number: ";
        cin>>s[i].rollNumber;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter marks: ";
        cin>>s[i].marks;
    }
    cout<<"\nStudent Records"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\nRoll Number: "<<s[i].rollNumber<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }
    delete[] s;
    cout<<"\nMemory released successfully.";
    return 0;
}
