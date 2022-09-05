#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
template <class myTemplate1, class myTemplate2>
myTemplate1 add(myTemplate1 a,myTemplate2 b)
{
    return a+b;
}

int main()
{
    cout<<"Sum of Integer type Data: "<<add(10.5,20)<<endl;

    getch();
}
