
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter new element: ";
    cin >> value;

    cout << "Enter position to insert: ";
    cin >> pos;

    if (pos < 1 || pos > n + 1 || n >= 100)
    {
        cout << "Invalid position or array is full!";
    }
    else
    {
        for (int i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = value;
        n++;

        cout << "Array after insertion: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}

