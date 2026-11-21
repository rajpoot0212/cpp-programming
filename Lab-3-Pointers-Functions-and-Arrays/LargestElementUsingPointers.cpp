#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {12, 45, 23, 67, 34, 89, 10, 56, 78, 21};
    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < 10; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    cout << "Largest element = " << largest << endl;

    return 0;
}
