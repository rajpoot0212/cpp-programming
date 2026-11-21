#include<iostream>
using namespace std;
class Circle
{
    float radius;
public:
    Circle(float r)
    {
        radius=r;
    }
    void setRadius(float r)
    {
        radius=r;
    }
    float getRadius()
    {
        return radius;
    }
    void display()
    {
        float area=3.14*getRadius()*getRadius();
        float circumference=2*3.14*getRadius();
        cout<<"Radius: "<<getRadius()<<endl;
        cout<<"Area: "<<area<<endl;
        cout<<"Circumference: "<<circumference<<endl;
    }
};
int main()
{
    Circle c(5);
    c.display();
    c.setRadius(7);
    cout<<"\nUpdated Circle Information"<<endl;
    c.display();
    return 0;
}
