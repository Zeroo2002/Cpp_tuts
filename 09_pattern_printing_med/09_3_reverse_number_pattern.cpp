#include<iostream>
using namespace std;

int main(void)
{
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i = 1; i<=height; i++)
    {
        for(int j = i; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}