#include<iostream>
using namespace std;
class ArrayOperations
{
    int arr[10];
public:
    void input()
    {
        for(int i=0;i<10;i++)
        {
            cout<<"Enter element "<<i+1<<": ";
            cin>>arr[i];
        }
    }
    int sum()
    {
        int s=0;
        for(int i=0;i<10;i++)
            s=s+arr[i];
        return s;
    }
    float average()
    {
        return sum()/10.0;
    }
    int maximum()
    {
        int max=arr[0];
        for(int i=1;i<10;i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        return max;
    }
    int minimum()
    {
        int min=arr[0];
        for(int i=1;i<10;i++)
        {
            if(arr[i]<min)
                min=arr[i];
        }
        return min;
    }
    void display()
    {
        cout<<"\nSum: "<<sum()<<endl;
        cout<<"Average: "<<average()<<endl;
        cout<<"Maximum: "<<maximum()<<endl;
        cout<<"Minimum: "<<minimum()<<endl;
    }
};
int main()
{
    ArrayOperations a;
    a.input();
    a.display();
    return 0;
}
