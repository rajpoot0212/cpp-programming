
#include<iostream>
using namespace std;
struct Book
{
    int id;
    string title;
    string author;
    float price;
};
int main()
{
    Book b[5];
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of book "<<i+1<<endl;
        cout<<"Enter book ID: ";
        cin>>b[i].id;
        cout<<"Enter title: ";
        cin>>b[i].title;
        cout<<"Enter author's name: ";
        cin>>b[i].author;
        cout<<"Enter price: ";
        cin>>b[i].price;
    }
    int expensive=0;
    for(int i=1;i<5;i++)
    {
        if(b[i].price>b[expensive].price)
            expensive=i;
    }
    cout<<"\nMost Expensive Book"<<endl;
    cout<<"Title: "<<b[expensive].title<<endl;
    cout<<"Author: "<<b[expensive].author<<endl;
    cout<<"Price: Rs. "<<b[expensive].price<<endl;
    cout<<"\nBooks Below Rs. 1000"<<endl;
    for(int i=0;i<5;i++)
    {
        if(b[i].price<1000)
        {
            cout<<"\nBook ID: "<<b[i].id<<endl;
            cout<<"Title: "<<b[i].title<<endl;
            cout<<"Author: "<<b[i].author<<endl;
            cout<<"Price: Rs. "<<b[i].price<<endl;
        }
    }
    return 0;
}
