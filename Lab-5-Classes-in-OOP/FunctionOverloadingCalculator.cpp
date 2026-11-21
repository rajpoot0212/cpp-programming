#include<iostream>
using namespace std;
class Calculator
{
public:
    int calculate(int a,int b)
    {
        return a+b;
    }
    float calculate(float a,float b)
    {
        return a+b;
    }
    int calculate(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    Calculator c;
    cout<<"Addition of two integers: "<<c.calculate(10,20)<<endl;
    cout<<"Addition of two float numbers: "<<c.calculate(2.5f,3.5f)<<endl;
    cout<<"Addition of three integers: "<<c.calculate(10,20,30)<<endl;
    return 0;
}
