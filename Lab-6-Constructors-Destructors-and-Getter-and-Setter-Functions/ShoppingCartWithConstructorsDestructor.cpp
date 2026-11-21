#include<iostream>
using namespace std;
class Product
{
    int productID,quantity;
    string productName;
    float price;
public:
    Product()
    {
        productID=0;
        productName="Unknown";
        price=0;
        quantity=0;
    }
    Product(int id,string n,float p,int q)
    {
        productID=id;
        productName=n;
        if(p>=0)
            price=p;
        else
            price=0;
        if(q>=0)
            quantity=q;
        else
            quantity=0;
    }
    void setData(int id,string n,float p,int q)
    {
        productID=id;
        productName=n;
        if(p>=0)
            price=p;
        else
            price=0;
        if(q>=0)
            quantity=q;
        else
            quantity=0;
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
    int getQuantity()
    {
        return quantity;
    }
    float totalPrice()
    {
        return price*quantity;
    }
    float applyDiscount()
    {
        return totalPrice()*0.10;
    }
    float finalPrice()
    {
        return totalPrice()-applyDiscount();
    }
    void display()
    {
        cout<<"Product ID: "<<getID()<<endl;
        cout<<"Product Name: "<<getName()<<endl;
        cout<<"Price: "<<getPrice()<<endl;
        cout<<"Quantity: "<<getQuantity()<<endl;
        cout<<"Total Price: "<<totalPrice()<<endl;
        cout<<"Discount (10%): "<<applyDiscount()<<endl;
        cout<<"Final Price: "<<finalPrice()<<endl;
    }
    ~Product()
    {
        cout<<"Product object destroyed: "<<productName<<endl;
    }
};
int main()
{
    Product p[3]={
        Product(101,"Laptop",80000,1),
        Product(102,"Mouse",1500,2),
        Product(103,"Keyboard",3000,1)
    };
    float bill=0;
    for(int i=0;i<3;i++)
    {
        cout<<"\nProduct "<<i+1<<endl;
        p[i].display();
        bill+=p[i].finalPrice();
    }
    cout<<"\nFinal Shopping Bill: "<<bill<<endl;
    return 0;
}
