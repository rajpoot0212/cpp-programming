#include<iostream>
using namespace std;
class Student
{
    string name,department;
    int rollNumber,semester;
    float marks[5];
public:
    void input()
    {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNumber;
        cout<<"Enter department: ";
        cin>>department;
        cout<<"Enter semester: ";
        cin>>semester;

        for(int i=0;i<5;i++)
        {
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    float total()
    {
        float sum=0;
        for(int i=0;i<5;i++)
            sum=sum+marks[i];
        return sum;
    }
    float percentage()
    {
        return (total()/500)*100;
    }
    char grade()
    {
        float per=percentage();
        if(per>=80)
            return 'A';
        else if(per>=70)
            return 'B';
        else if(per>=60)
            return 'C';
        else if(per>=50)
            return 'D';
        else
            return 'F';
    }
    void display()
    {
        cout<<"\nStudent Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Semester: "<<semester<<endl;

        for(int i=0;i<5;i++)
            cout<<"Subject "<<i+1<<" Marks: "<<marks[i]<<endl;

        cout<<"Total Marks: "<<total()<<"/500"<<endl;
        cout<<"Percentage: "<<percentage()<<"%"<<endl;
        cout<<"Grade: "<<grade()<<endl;
    }
};
int main()
{
    Student s[5];

    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        s[i].input();
    }

    cout<<"\n===== Student Transcripts ====="<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        s[i].display();
    }

    return 0;
}
