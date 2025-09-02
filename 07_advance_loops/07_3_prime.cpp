#include <iostream>
using namespace std;

int main(void)
{
    int num;

    cout << "Enter till which number to print prime numbers: ";
    cin >> num;

    if (num < 2)
    {
        cout << num << " is a prime number!";
        return 0;
    }

    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number!";
                return 0;
            }
        }
        cout << num << " is a prime number";
    }

    return 0;
}