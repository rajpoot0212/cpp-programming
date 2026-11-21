#include<iostream>
using namespace std;
struct Student
{
    int rollNumber;
    string name;
    int semester;
    float cgpa;
};
int main()
{
    Student s[8];
    int count=0;
    for(int i=0;i<8;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        cout<<"Enter roll number: ";
        cin>>s[i].rollNumber;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter semester: ";
        cin>>s[i].semester;
        cout<<"Enter CGPA: ";
        cin>>s[i].cgpa;
    }
    cout<<"\nScholarship Eligible Students"<<endl;
    for(int i=0;i<8;i++)
    {
        if(s[i].cgpa>=3.50)
        {
            cout<<"\nRoll Number: "<<s[i].rollNumber<<endl;
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Semester: "<<s[i].semester<<endl;
            cout<<"CGPA: "<<s[i].cgpa<<endl;
            count++;
        }
    }
    cout<<"\nTotal Eligible Students: "<<count<<endl;
    return 0;
}
