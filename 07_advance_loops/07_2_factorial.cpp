#include<iostream>
using namespace std;

int main(void)
{
    int fact = 1;

    int num;
    cout<<"Enter the number for which factorial is needed: ";
    cin>>num;

    for(int i = 1; i<=num; i++)
    {
        fact *=i;
    }
    cout<<"Factorial of "<<num<<" is: "<<fact;
}