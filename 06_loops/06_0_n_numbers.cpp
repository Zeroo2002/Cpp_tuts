#include<iostream>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter the number you want to print to: ";
    cin>>num;

    for(int i = 0; i < num; i++)
    {
        cout<< i + 1<<endl;
    }

    return 0;
}