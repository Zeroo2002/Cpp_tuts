#include<iostream>
using namespace std;

int main(void)
{
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i = 97; i<=(height + 97); i++)
    {
        for(int j = 97; j<=i; j++)
        {
            cout<<(char)i<<" ";
        }
        cout<<endl;
    }
    return 0;
}