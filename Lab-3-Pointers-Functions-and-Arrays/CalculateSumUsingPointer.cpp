#include <iostream>
using namespace std;

int calculateSum(int *ptr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }

    return sum;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int result = calculateSum(arr, 5);

    cout << "Sum of array elements = " << result << endl;

    return 0;
}
