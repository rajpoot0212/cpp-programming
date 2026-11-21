
#include <iostream>
using namespace std;

void count(int a[], int n)
{
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;
}

int main()
{
    int a[5];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];

    count(a, 5);

    return 0;
}

