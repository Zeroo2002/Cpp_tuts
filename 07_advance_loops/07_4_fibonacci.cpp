#include<iostream>
using namespace std;

int main(void)
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int fib0 = 0;
    int fib1 = 1;

    cout<<fib0<<endl;
    cout<<fib1<<endl;

    for(int i = 0; i<=num; i++)
    {
        int fib2 = fib0 + fib1;
        cout<<fib2<<endl;
        fib0 = fib1;
        fib1 = fib2;
    }
}