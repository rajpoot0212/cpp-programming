#include<iostream>
using namespace std;
class Number
{
    int num;
public:
    void input()
    {
        cout<<"Enter number: ";
        cin>>num;
    }
    void display()
    {
        cout<<"Number: "<<num<<endl;
    }
    void modify()
    {
        num=50;
    }
};
int main()
{
    Number n;
    Number *ptr=&n;

    cout<<"Original value:"<<endl;
    ptr->input();
    ptr->display();

    ptr->modify();

    cout<<"Updated value:"<<endl;
    ptr->display();

    return 0;
}
