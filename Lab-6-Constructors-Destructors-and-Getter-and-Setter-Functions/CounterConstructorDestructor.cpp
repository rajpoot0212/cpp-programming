#include<iostream>
using namespace std;
class Counter
{
    int count;
public:
    Counter()
    {
        count=0;
    }
    void increment()
    {
        count++;
    }
    void decrement()
    {
        count--;
    }
    void display()
    {
        cout<<"Counter Value: "<<count<<endl;
    }
    ~Counter()
    {
        cout<<"Object is destroyed"<<endl;
    }
};
int main()
{
    Counter c;
    c.display();
    c.increment();
    c.increment();
    c.display();
    c.decrement();
    c.display();
    return 0;
}
