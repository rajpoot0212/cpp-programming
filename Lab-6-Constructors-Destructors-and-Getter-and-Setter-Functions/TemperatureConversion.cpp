#include<iostream>
using namespace std;
class Temperature
{
    float celsius;
public:
    Temperature(float c)
    {
        celsius=c;
    }
    void setTemperature(float c)
    {
        celsius=c;
    }
    float getTemperature()
    {
        return celsius;
    }
    void toFahrenheit()
    {
        cout<<"Fahrenheit: "<<(getTemperature()*9/5)+32<<endl;
    }
    void toKelvin()
    {
        cout<<"Kelvin: "<<getTemperature()+273.15<<endl;
    }
};
int main()
{
    Temperature t(25);
    cout<<"Celsius: "<<t.getTemperature()<<endl;
    t.toFahrenheit();
    t.toKelvin();
    return 0;
}
