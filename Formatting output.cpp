#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter 2 numbers : "<<endl;
    cin>>num1>>num2;
    int sum =num1+num2;
    cout<<"Sum is : "<<sum<<endl;


    int sub =num1-num2;
    cout<<"Sub is : "<<sub<<endl;


    int mul =num1*num2;
    cout<<"mul is : "<<mul<<endl;



    double div =(float)num1/num2;
    cout<<"div is : "<<div<<endl;

    int rem =num1/num2;
    cout<<"rem is : "<<rem;


    getch ();
}

