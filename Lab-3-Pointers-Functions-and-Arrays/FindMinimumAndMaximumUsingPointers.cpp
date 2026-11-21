#include <iostream>
using namespace std;

void findMinMax(int *arr, int size, int *min, int *max)
{
    *min = *arr;
    *max = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }

        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
    }
}

int main()
{
    int arr[5] = {30, 10, 50, 20, 40};
    int minimum, maximum;

    findMinMax(arr, 5, &minimum, &maximum);

    cout << "Smallest element = " << minimum << endl;
    cout << "Largest element = " << maximum << endl;

    return 0;
}
