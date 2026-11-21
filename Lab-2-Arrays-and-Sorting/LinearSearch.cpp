
#include <iostream>
using namespace std;

int search(int a[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int a[5], key;

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter number to search: ";
    cin >> key;

    int result = search(a, 5, key);

    if(result == -1)
        cout << "Number not found";
    else
        cout << "Number found at position " << result + 1;

    return 0;
}

