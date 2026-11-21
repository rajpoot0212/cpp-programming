#include<iostream>
using namespace std;
class Product
{
    int productID;
    string productName;
    float price;
public:
    Product(int id,string name,float p)
    {
        productID=id;
        productName=name;
        price=p;
    }
    void setData(int id,string name,float p)
    {
        productID=id;
        productName=name;
        price=p;
    }
    int getID()
    {
        return productID;
    }
    string getName()
    {
        return productName;
    }
    float getPrice()
    {
        return price;
    }
    void display()
    {
        cout<<"Product ID: "<<getID()<<endl;
        cout<<"Product Name: "<<getName()<<endl;
        cout<<"Price: "<<getPrice()<<endl;
    }
};
int main()
{
    Product p(101,"Laptop",85000);
    p.display();
    p.setData(102,"Mobile",45000);
    cout<<"\nUpdated Product Information"<<endl;
    p.display();
    return 0;
}
