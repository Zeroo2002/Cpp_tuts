#include<iostream>
using namespace std;

int main(void)
{
    int height;

    cout<<"Enter the height: ";
    cin>>height;

    for(int i = 97; i<height + 97; i++)
    {
        for(int k=97; k<(height + 97); k++)
        {
            cout<<" ";
        }
        for(int j = 97; j<=i; j++)
        {
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}
