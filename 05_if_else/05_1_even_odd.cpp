#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 0;

    cout<<"Enter the number: ";
    cin>>num1;

    if(num1 % 2 == 0)
    {
        cout<<"Your number is Even";
    }
    else
    {
        cout<<"Your number is Odd";
    }
}