#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter the value of num: ";
    cin>>num;

    int i = 0;
    int j = 1; 
    int count = 1;

    for(i = 0; i<num; i++)
    {
        for(j = 1; j<=num; j++)
        {
            cout<<count<<" ";
            count += 1;
        }
        cout<<endl;
    }
}