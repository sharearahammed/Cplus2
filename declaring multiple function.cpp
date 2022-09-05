#include<iostream>
#include<conio.h>
using namespace std;
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(20,30);
    subtraction(100,50);
    multiplication(100,5);
    division(10,5);
    cout << "All function have called" ;

    getch();

}
void addition(int a , int b)
{
    int sum = a + b;
    cout << "Sum = " << sum <<endl;
}
void subtraction(int a , int b)
{
    int sub = a - b;
    cout << "Subtraction is  = " << sub <<endl;
}
void multiplication(int a , int b)
{
    float mult = (float)a / b;
    cout << "Multiplication is  = " << mult <<endl;
}
void division(int a , int b)
{
    float div = (float)a / b;
    cout << "Division is  = " << div <<endl;
}
