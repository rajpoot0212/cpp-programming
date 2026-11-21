#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << "Before pointing to the same variable:" << endl;
    cout << "Pointer 1 address: " << ptr1 << endl;
    cout << "Pointer 2 address: " << ptr2 << endl;

    if (ptr1 == ptr2)
        cout << "Pointers have the same address." << endl;
    else
        cout << "Pointers have different addresses." << endl;

    ptr2 = &a;

    cout << "\nAfter pointing to the same variable:" << endl;
    cout << "Pointer 1 address: " << ptr1 << endl;
    cout << "Pointer 2 address: " << ptr2 << endl;

    if (ptr1 == ptr2)
        cout << "Pointers have the same address." << endl;
    else
        cout << "Pointers have different addresses." << endl;

    return 0;
}
