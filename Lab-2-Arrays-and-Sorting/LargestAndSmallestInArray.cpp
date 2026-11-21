#include<iostream>
using namespace std;
int maximum(int a[])
{
    int max = a[0];
    for(int i=1;i<10;i++)
    if(a[i]>max)
    max = a[i];
    return max;
}
int minimum(int a[])
{
    int min=a[0];
    for(int i=1;i<10;i++)
    if(a[i]<min)
    min=a[i];
    return min;
}
int main()
{
    int a[10];
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++)
    cin>>a[i];
    cout<<"Largest = "<<maximum(a)<<endl;
    cout<<"Smallest = "<<minimum(a)<<endl;
    return 0;
}
