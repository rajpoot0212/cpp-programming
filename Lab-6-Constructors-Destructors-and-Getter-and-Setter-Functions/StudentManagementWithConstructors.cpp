#include<iostream>
using namespace std;
class Student
{
    int id,semester;
    string name;
    float m1,m2,m3;
public:
    Student()
    {
        id=0;
        name="Unknown";
        semester=0;
        m1=m2=m3=0;
    }
    Student(int i,string n,int s,float a,float b,float c)
    {
        id=i;
        name=n;
        semester=s;
        m1=a;
        m2=b;
        m3=c;
    }
    void setID(int i)
    {
        id=i;
    }
    void setName(string n)
    {
        name=n;
    }
    void setSemester(int s)
    {
        semester=s;
    }
    void setMarks(float a,float b,float c)
    {
        m1=a;
        m2=b;
        m3=c;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    int getSemester()
    {
        return semester;
    }
    float getM1()
    {
        return m1;
    }
    float getM2()
    {
        return m2;
    }
    float getM3()
    {
        return m3;
    }
    float totalMarks()
    {
        return m1+m2+m3;
    }
    float percentage()
    {
        return (totalMarks()/300)*100;
    }
    char grade()
    {
        if(percentage()>=80)
            return 'A';
        else if(percentage()>=70)
            return 'B';
        else if(percentage()>=60)
            return 'C';
        else if(percentage()>=50)
            return 'D';
        else
            return 'F';
    }
    void display()
    {
        cout<<"\nStudent ID: "<<getID()<<endl;
        cout<<"Name: "<<getName()<<endl;
        cout<<"Semester: "<<getSemester()<<endl;
        cout<<"Subject 1 Marks: "<<getM1()<<endl;
        cout<<"Subject 2 Marks: "<<getM2()<<endl;
        cout<<"Subject 3 Marks: "<<getM3()<<endl;
        cout<<"Total Marks: "<<totalMarks()<<"/300"<<endl;
        cout<<"Percentage: "<<percentage()<<"%"<<endl;
        cout<<"Grade: "<<grade()<<endl;
    }
};
int main()
{
    Student s1;
    Student s2(101,"Ali",3,85,90,80);
    s1.setID(102);
    s1.setName("Ahmed");
    s1.setSemester(2);
    s1.setMarks(70,75,80);
    cout<<"Student 1 Record";
    s1.display();
    cout<<"\nStudent 2 Record";
    s2.display();
    return 0;
}
