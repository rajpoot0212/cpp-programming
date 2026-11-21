#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    int *start = arr;
    int *end = arr + 7;
    int temp;

    cout << "Original array: ";
    for (int i = 0; i < 8; i++)
    {
        cout << *(arr + i) << " ";
    }

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "\nReversed array: ";
    for (int i = 0; i < 8; i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}
