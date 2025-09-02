#include<iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter the number you want to print square of the number to: ";
    cin>>num;

    for(int i = 0; i < num; i++)
    {
        int sq = round(pow(i+1, 2));
        cout<<sq<<endl;
    }

    return 0;
}