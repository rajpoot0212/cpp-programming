#include<iostream>
using namespace std;
int main()
{
    int marks[20];
    int A = 0, B = 0, C = 0, D = 0, F = 0;
    for(int i=0;i<20;i++)
    {
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>marks[i];
        if(marks[i]>85)
        A++;
        else if(marks[i]>70)
        B++;
        else if(marks[i]>60)
        C++;
        else if(marks[i]>50)
        D++;
        else
        F++;
    }
    cout<<"\nGrade A = "<<A<<endl;
    cout<<"Grade B = "<<B<<endl;
    cout<<"Grade C = "<<C<<endl;
    cout<<"Grade D = "<<D<<endl;
    cout<<"Grade F = "<<F<<endl;
    cout<<"Total Students = "<<A+B+C+D+F<<endl;
    return 0;
}
