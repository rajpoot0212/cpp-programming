
#include <iostream>
using namespace std;

void swapElements(int a[], int pos1, int pos2)
{
    int temp = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = temp;
}

int main()
{
    int a[5], pos1, pos2;

    cout << "Enter 5 array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter first position (1-5): ";
    cin >> pos1;

    cout << "Enter second position (1-5): ";
    cin >> pos2;

    if (pos1 < 1 || pos1 > 5 || pos2 < 1 || pos2 > 5)
    {
        cout << "Invalid position!";
    }
    else
    {
        swapElements(a, pos1 - 1, pos2 - 1);

        cout << "Array after swapping: ";
        for (int i = 0; i < 5; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}

