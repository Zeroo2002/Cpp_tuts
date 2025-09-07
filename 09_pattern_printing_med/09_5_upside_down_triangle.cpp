#include<iostream>
using namespace std;

int main(void)
{
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i = 0; i<height; i++)
    {
        for(int j = height; j>i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}