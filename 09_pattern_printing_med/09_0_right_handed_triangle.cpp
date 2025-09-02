#include<iostream>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter the height: ";
    cin>>num;

    for(int i=0; i<num; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}