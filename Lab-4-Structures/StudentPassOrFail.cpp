
#include<iostream>
using namespace std;
struct Student
{
    int rollNumber;
    string name;
    float marks[3];
};
int main()
{
    Student s[5];
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        cout<<"Enter roll number: ";
        cin>>s[i].rollNumber;
        cout<<"Enter name: ";
        cin>>s[i].name;
        for(int j=0;j<3;j++)
        {
            cout<<"Enter marks of subject "<<j+1<<": ";
            cin>>s[i].marks[j];
        }
    }
    cout<<"\nStudent Results"<<endl;
    for(int i=0;i<5;i++)
    {
        float total=0,average;
        int pass=1;
        for(int j=0;j<3;j++)
        {
            total=total+s[i].marks[j];
            if(s[i].marks[j]<40)
                pass=0;
        }
        average=total/3;
        cout<<"\nRoll Number: "<<s[i].rollNumber<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Average Marks: "<<average<<endl;
        if(pass==1)
            cout<<"Result: Pass"<<endl;
        else
            cout<<"Result: Fail"<<endl;
    }
    return 0;
}
