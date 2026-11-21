#include<iostream>
using namespace std;
class Vehicle
{
    int regNumber;
    string ownerName,vehicleType;
    int modelYear;
    float pricePerDay;
public:
    void input()
    {
        cout<<"Enter registration number: ";
        cin>>regNumber;
        cout<<"Enter owner name: ";
        cin>>ownerName;
        cout<<"Enter vehicle type: ";
        cin>>vehicleType;
        cout<<"Enter model year: ";
        cin>>modelYear;
        cout<<"Enter rental price per day: ";
        cin>>pricePerDay;
    }
    float calculate(int days)
    {
        float total=pricePerDay*days;
        if(days>=7)
            total=total-(total*0.10);
        return total;
    }
    void display(int days)
    {
        cout<<"\nRegistration Number: "<<regNumber<<endl;
        cout<<"Owner Name: "<<ownerName<<endl;
        cout<<"Vehicle Type: "<<vehicleType<<endl;
        cout<<"Model Year: "<<modelYear<<endl;
        cout<<"Price Per Day: "<<pricePerDay<<endl;
        cout<<"Rental Days: "<<days<<endl;
        cout<<"Total Rental Charges: "<<calculate(days)<<endl;
    }
};
int main()
{
    Vehicle v[3];
    Vehicle *ptr;
    int days;

    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter vehicle "<<i+1<<" details:"<<endl;
        v[i].input();
    }

    cout<<"\nEnter rental days: ";
    cin>>days;

    cout<<"\nVehicle Rental Bills:"<<endl;
    for(int i=0;i<3;i++)
    {
        ptr=&v[i];
        ptr->display(days);
    }

    return 0;
}
