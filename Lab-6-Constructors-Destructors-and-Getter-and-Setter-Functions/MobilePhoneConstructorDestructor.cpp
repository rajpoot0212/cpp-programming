#include<iostream>
using namespace std;
class MobilePhone
{
    string brand,model;
    float price;
public:
    MobilePhone(string b,string m,float p)
    {
        brand=b;
        model=m;
        price=p;
    }
    void setData(string b,string m,float p)
    {
        brand=b;
        model=m;
        price=p;
    }
    string getBrand()
    {
        return brand;
    }
    string getModel()
    {
        return model;
    }
    float getPrice()
    {
        return price;
    }
    void display()
    {
        cout<<"Brand: "<<getBrand()<<endl;
        cout<<"Model: "<<getModel()<<endl;
        cout<<"Price: "<<getPrice()<<endl;
    }
    ~MobilePhone()
    {
        cout<<"MobilePhone object is destroyed"<<endl;
    }
};
int main()
{
    MobilePhone m("Samsung","S24",250000);
    m.display();
    m.setData("Apple","iPhone 16",350000);
    cout<<"\nUpdated Mobile Information"<<endl;
    m.display();
    return 0;
}
