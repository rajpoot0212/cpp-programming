
#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int a[5];
    int temp = num;
    
    for (int i = 0; i < 5; i++)
    {
        a[i] = temp % 10;
        temp = temp / 10;
    }

    int reversed = 0;

    for (int i = 0; i < 5; i++)
    {
        reversed = reversed * 10 + a[i];
    }

    return reversed;
}

int main()
{
    int num, reversed;

    cout << "Enter a five-digit number: ";
    cin >> num;

    if (num < 10000 || num > 99999)
    {
        cout << "Please enter a valid five-digit number.";
        return 0;
    }

    reversed = reverseNumber(num);

    cout << "Reversed number = " << reversed << endl;

    if (num == reversed)
    {
        cout << "The number is a Palindrome.";
    }
    else
    {
        cout << "The number is not a Palindrome.";
    }

    return 0;
}

