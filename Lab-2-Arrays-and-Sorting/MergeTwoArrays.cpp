
#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3], c[6];

    cout << "Enter 3 numbers for first array: ";
    for(int i = 0; i < 3; i++)
        cin >> a[i];

    cout << "Enter 3 numbers for second array: ";
    for(int i = 0; i < 3; i++)
        cin >> b[i];

    for(int i = 0; i < 3; i++)
        c[i] = a[i];

    for(int i = 0; i < 3; i++)
        c[i + 3] = b[i];

    cout << "Merged array: ";
    for(int i = 0; i < 6; i++)
        cout << c[i] << " ";

    return 0;
}

