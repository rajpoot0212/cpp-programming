#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = arr;
    int num;
    int index = -1;

    cout << "Enter number to search: ";
    cin >> num;

    for (int i = 0; i < 10; i++)
    {
        if (*(ptr + i) == num)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        cout << "Number found at index: " << index << endl;
    }
    else
    {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
