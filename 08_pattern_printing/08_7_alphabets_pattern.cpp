#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter the value of num: ";
    cin>>num;

    int letter = 97;

    for(int i = letter; i<=(letter + num); i++)
    {
        for(int j = 0; j<num; j++)
        {
            cout<<(char)i;
        }
        cout<<endl;
    }
}