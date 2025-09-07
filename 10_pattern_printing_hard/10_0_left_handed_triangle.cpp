/*
    *
   **
  ***
 ****
*****
*/


#include<iostream>
using namespace std;

int main(void)
{
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i = 0; i<height; i++)
    {
        for(int k = 0; k<(height - (i+1)); k++)
        {
            cout<<" ";
        }
        for(int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        // cout<<"**"<<endl;
    }
    return 0;
}