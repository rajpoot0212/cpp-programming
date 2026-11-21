#include<iostream>
using namespace std;
struct Consumer
{
    int id;
    string name;
    int units;
};
int main()
{
    Consumer c[5];
    float bill;
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter details of consumer "<<i+1<<endl;
        cout<<"Enter consumer ID: ";
        cin>>c[i].id;
        cout<<"Enter consumer name: ";
        cin>>c[i].name;
        cout<<"Enter units consumed: ";
        cin>>c[i].units;
    }
    cout<<"\nElectricity Bills"<<endl;
    for(int i=0;i<5;i++)
    {
        if(c[i].units<=100)
            bill=c[i].units*10;
        else if(c[i].units<=200)
            bill=(100*10)+(c[i].units-100)*15;
        else
            bill=(100*10)+(100*15)+(c[i].units-200)*20;
        cout<<"\nConsumer ID: "<<c[i].id<<endl;
        cout<<"Consumer Name: "<<c[i].name<<endl;
        cout<<"Units Consumed: "<<c[i].units<<endl;
        cout<<"Total Bill: Rs. "<<bill<<endl;
    }
    return 0;
}
