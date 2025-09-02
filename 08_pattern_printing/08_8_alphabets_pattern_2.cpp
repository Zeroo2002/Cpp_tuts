#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter the value of num: ";
    cin>>num;

    int letter = 97;

    for(int i = 0; i<num; i++)
    {
        for(int j = letter; j<(letter + num); j++)
        {
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}