#include<iostream>
using namespace std;
class Product
{
    int productID;
    string productName;
    float price;
public:
    void input()
    {
        cout<<"Enter product ID: ";
        cin>>productID;
        cout<<"Enter product name: ";
        cin>>productName;
        cout<<"Enter price: ";
        cin>>price;
    }
    void display()
    {
        cout<<"\nProduct ID: "<<productID<<endl;
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Price: "<<price<<endl;
    }
    float getPrice()
    {
        return price;
    }
    void mostExpensive()
    {
        cout<<"\nMost Expensive Product:"<<endl;
        display();
    }
};
int main()
{
    Product p[5];
    int maxIndex=0;

    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter product "<<i+1<<" details:"<<endl;
        p[i].input();
    }

    cout<<"\nAll Products:"<<endl;
    for(int i=0;i<5;i++)
    {
        p[i].display();
        if(p[i].getPrice()>p[maxIndex].getPrice())
            maxIndex=i;
    }

    p[maxIndex].mostExpensive();

    return 0;
}
