#include<iostream>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter how many even numbers you want to print: ";
    cin>>num;

    for(int i = 1; i<=num; i++)
    {
        if(i%2 == 0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}