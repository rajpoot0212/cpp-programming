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
    Student s[10];
    float total=0,average;
    for(int i=0;i<10;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        cout<<"Enter roll number: ";
        cin>>s[i].rollNumber;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter marks: ";
        cin>>s[i].marks;
        total=total+s[i].marks;
    }
    average=total/10;
    cout<<"\nClass Average: "<<average<<endl;
    cout<<"\nStudents Above Class Average"<<endl;
    for(int i=0;i<10;i++)
    {
        if(s[i].marks>average)
        {
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Marks: "<<s[i].marks<<endl;
        }
    }
    return 0;
}
