#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<< "Enter an integer number:";
    cin>> num;

    if(num%2==0)
    {
        cout<< "It is even Number";
    }

    else
    {
        cout<< "It is odd number";
    }

    getch();
}
