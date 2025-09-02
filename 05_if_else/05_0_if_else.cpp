#include <iostream>
using namespace std;

int main(void)
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 18)
    {
        cout<<"You can drive!";
    }
    else if(age == 17)
    {
        cout<<"Come back after your birthday.";
    }
    else
    {
        cout<<"Who sent you here?";
    }

    return 0;
}