#include<iostream>
using namespace std;
int power(int x, int y)
{
    int result=1;
    for(int i=1;i<=y;i++)
    result = result * x;
    return result;
}
int main()
{
    int x,y;
    cout<<"Enter base: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>y;
    cout<<"Answer = "<< power(x, y);
    return 0;
}
