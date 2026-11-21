#include<iostream>
using namespace std;
int main()
{
    int low,high,even=0,odd=0;
    cout<<"Enter lower limit: ";
    cin>>low;
    cout<<"Enter higher limit: ";
    cin>>high;
    for(int i=low;i<=high;i++)
    {
    if(i%2==0)
    even=even+i;
    else
    odd=odd+i;
    }
    cout<<"Sum of Even numbers = "<<even<<endl;
    cout<<"Sum of Odd numbers = "<<odd<<endl;
    return 0;
}
