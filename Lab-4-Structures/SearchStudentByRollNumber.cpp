
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
    int searchRoll,found=0;
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
    cout<<"\nEnter roll number to search: ";
    cin>>searchRoll;
    for(int i=0;i<5;i++)
    {
        if(s[i].rollNumber==searchRoll)
        {
            cout<<"\nStudent Record Found"<<endl;
            cout<<"Roll Number: "<<s[i].rollNumber<<endl;
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Marks: "<<s[i].marks<<endl;
            found=1;
            break;
        }
    }
    if(found==0)
        cout<<"Student record not found.";
    return 0;
}
