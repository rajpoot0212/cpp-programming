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
    Student s[5],temp;
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        cout<<"Enter roll number: ";
        cin>>s[i].rollNumber;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter marks: ";
        cin>>s[i].marks;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(s[j].marks<s[j+1].marks)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    cout<<"\nStudents Sorted by Marks (Highest to Lowest)"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\nRoll Number: "<<s[i].rollNumber<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }
    return 0;
}
