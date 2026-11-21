#include<iostream>
using namespace std;
int main()
{
    int marks,total=0;
    float average;
    for(int i=1;i<=10;i++)
    {
    cout<<"Enter marks of student " << i << ": ";
    cin>>marks;
    if(marks<0||marks>100)
        {
        cout<<"Invalid marks! Enter again."<<endl;
        i--;
        continue;
        }
        total=total+marks;
        if(marks>90)
        cout << "Grade: A"<<endl;
        else if(marks>80)
        cout<<"Grade: B"<<endl;
        else if(marks>70)
        cout<<"Grade: C"<<endl;
        else if(marks>60)
        cout<<"Grade: D"<<endl;
        else
        cout<<"Grade: F"<<endl;
    }
    average=total/10.0;
    cout<<"Total Marks = "<<total<<endl;
    cout<<"Class Average = "<<average<<endl;
    return 0;
}
