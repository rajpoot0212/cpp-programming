#include<iostream>
using namespace std;
int main()
{
    int num = 2;
    int *ptr = &num;
    cout << "Variable value: " << num << endl;
    cout << "Memory address: " << &num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    return 0;
}
