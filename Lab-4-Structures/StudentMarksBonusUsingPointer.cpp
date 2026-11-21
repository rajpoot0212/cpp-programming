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
    Student s;
    Student *ptr=&s;
    cout<<"Enter roll number: ";
    cin>>ptr->rollNumber;
    cout<<"Enter name: ";
    cin>>ptr->name;
    cout<<"Enter marks: ";
    cin>>ptr->marks;
    cout<<"\nOriginal Marks: "<<ptr->marks<<endl;
    ptr->marks=ptr->marks+5;
    if(ptr->marks>100)
        ptr->marks=100;
    cout<<"Updated Marks: "<<ptr->marks<<endl;
    return 0;
}
