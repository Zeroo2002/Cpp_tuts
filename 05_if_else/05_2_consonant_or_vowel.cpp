#include <iostream>
using namespace std;

int main(void)
{
    char c;

    cout<<"Enter a character: ";
    cin>>c;

    if( c=='a' | c=='e' | c=='i' | c=='o' | c=='u')
    {
        cout<<"The character is a vowel";
    }
    else{
        cout<<"The character is a consonant";
    }

    return 0;
}