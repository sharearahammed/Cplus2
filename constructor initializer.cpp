#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public :
    const int addmissionFee;
    const int examFee;
    int id;

    Student(int x,int y,int z)
    : addmissionFee(x),examFee(y)
    {

        cout<< addmissionFee << endl;
        cout<< examFee << endl;
        id=z;
        cout<<"ID = "<<id<<endl;
    }

};
int main()
{
    Student s1(15000,500,101);


    getch();
}
