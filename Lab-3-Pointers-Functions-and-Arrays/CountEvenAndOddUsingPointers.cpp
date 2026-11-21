#include <iostream>
using namespace std;
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int *ptr = arr;
    int even = 0, odd = 0;
    for (int i = 0; i < 15; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Even elements count = " << even << endl;
    cout << "Odd elements count = " << odd << endl;

    return 0;
}
