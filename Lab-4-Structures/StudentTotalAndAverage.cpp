#include<iostream>
using namespace std;
struct Student
{
    string name;
    int rollNumber;
    float marks[3];
};
int main()
{
    Student s;
    float total=0,average;
    cout<<"Enter student name: ";
    cin>>s.name;
    cout<<"Enter roll number: ";
    cin>>s.rollNumber;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter marks of subject "<<i+1<<": ";
        cin>>s.marks[i];
        total=total+s.marks[i];
    }
    average=total/3;
    cout<<"\nStudent Information"<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll Number: "<<s.rollNumber<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Subject "<<i+1<<" Marks: "<<s.marks[i]<<endl;
    }
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Average Marks: "<<average<<endl;
    return 0;
}
