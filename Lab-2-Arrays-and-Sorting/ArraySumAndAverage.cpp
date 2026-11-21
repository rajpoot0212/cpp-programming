#include<iostream>
using namespace std;
int main()
{
    int a[15],sum=0;
    float average;
    cout<<"Enter 15 numbers: ";
    for(int i=0;i<15;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    }
    average=sum/15.0;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<average<<endl;
    return 0;
}
