#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + *(ptr + i);
    }

    cout << "Sum of array elements = " << sum << endl;

    return 0;
}
