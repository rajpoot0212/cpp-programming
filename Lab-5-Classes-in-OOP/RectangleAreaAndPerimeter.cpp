#include<iostream>
using namespace std;
class Rectangle
{
    float length,width;
public:
    void initialize(float l,float w)
    {
        length=l;
        width=w;
    }
    float area()
    {
        return length*width;
    }
    float perimeter()
    {
        return 2*(length+width);
    }
    void display()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
};
int main()
{
    Rectangle r;
    float l,w;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter width: ";
    cin>>w;
    r.initialize(l,w);
    r.display();
    return 0;
}
