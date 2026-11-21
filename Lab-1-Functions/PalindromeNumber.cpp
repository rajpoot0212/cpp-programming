#include<iostream>
using namespace std;
int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
    rev=rev*10+n%10;
    n=n/10;
    }
    return rev;
}
void palindrome(int n)
{
    if(n== reverse(n))
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindrome(n);
    return 0;
}
