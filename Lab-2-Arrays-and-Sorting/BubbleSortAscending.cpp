
#include <iostream>
using namespace std;

void sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[5];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];

    sort(a, 5);

    cout << "Ascending order: ";
    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}

