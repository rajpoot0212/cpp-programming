#include<iostream>
using namespace std;
struct Product
{
    int id;
    string name;
    float price;
    int quantity;
};
int main()
{
    Product p[5];
    float totalValue=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter details of product "<<i+1<<endl;
        cout<<"Enter product ID: ";
        cin>>p[i].id;
        cout<<"Enter product name: ";
        cin>>p[i].name;
        cout<<"Enter price: ";
        cin>>p[i].price;
        cout<<"Enter quantity: ";
        cin>>p[i].quantity;
    }
    cout<<"\nProduct Inventory"<<endl;
    for(int i=0;i<5;i++)
    {
        float value=p[i].price*p[i].quantity;
        totalValue=totalValue+value;
        cout<<"\nProduct ID: "<<p[i].id<<endl;
        cout<<"Product Name: "<<p[i].name<<endl;
        cout<<"Price: "<<p[i].price<<endl;
        cout<<"Quantity: "<<p[i].quantity<<endl;
        cout<<"Total Value: "<<value<<endl;
    }
    cout<<"\nTotal Value of All Products: "<<totalValue<<endl;
    return 0;
}
