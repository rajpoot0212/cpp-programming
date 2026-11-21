#include<iostream>
using namespace std;
class DynamicArray
{
    int *arr;
    int size;
public:
    void input()
    {
        cout<<"Enter array size: ";
        cin>>size;
        arr=new int[size];

        for(int i=0;i<size;i++)
        {
            cout<<"Enter element "<<i+1<<": ";
            cin>>arr[i];
        }
    }
    int sum()
    {
        int s=0;
        for(int i=0;i<size;i++)
            s=s+arr[i];
        return s;
    }
    float average()
    {
        return (float)sum()/size;
    }
    void display()
    {
        cout<<"\nArray elements: ";
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<"\nSum: "<<sum()<<endl;
        cout<<"Average: "<<average()<<endl;
    }
    void releaseMemory()
    {
        delete[] arr;
        arr=NULL;
    }
};
int main()
{
    DynamicArray a;
    a.input();
    a.display();
    a.releaseMemory();
    return 0;
}
