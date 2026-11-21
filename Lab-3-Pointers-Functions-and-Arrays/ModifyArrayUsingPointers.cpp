#include <iostream>
using namespace std;

void modifyArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            *(ptr + i) = *(ptr + i) * 2;
        }
        else
        {
            *(ptr + i) = 0;
        }
    }
}

int main()
{
    int arr[5] = {2, 5, 8, 3, 10};

    cout << "Original array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }

    modifyArray(arr, 5);

    cout << "\nModified array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}
