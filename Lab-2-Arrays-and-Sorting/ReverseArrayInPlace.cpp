
#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    for(int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

void display(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[5];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];

    reverse(a, 5);

    cout << "Reversed array: ";
    display(a, 5);

    return 0;
}

