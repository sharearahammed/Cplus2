#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    for (int i=1; i<=100; i = i+3)
    {
        if(i==10)
        {
            continue;
        }
        if(i>16)
        {
            break;
        }
        cout<<i<<endl;
    }
    getch();
}
