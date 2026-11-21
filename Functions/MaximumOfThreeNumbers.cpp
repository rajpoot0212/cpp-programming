#include<iostream>
using namespace std;
int maximum(int a,int b,int c)
{
    if(a>b&&a>c)
    return a;
    if(b>a&&b>c)
    return b;
    return c;
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Maximum = "<< maximum(a,b,c);
    return 0;
}
