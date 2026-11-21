#include<iostream>
using namespace std;
class Student
{
    string name;
    int rollNumber,age;
public:
    Student()
    {
        name="Saif";
        rollNumber=43;
        age=19;
    }
    void display()
    {
        cout<<"Student Information"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}
