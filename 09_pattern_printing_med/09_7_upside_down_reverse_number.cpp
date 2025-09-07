#include<iostream>
using namespace std;

int main(void)
{
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i = 0; i<height; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<height - j<<" ";
        }
        cout<<endl;
    }
    return 0;
}