#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Student
{
    public :

    int id;
    double gpa;

    void display()
    {
        cout<<"ID = "<<id<<endl<<"GPA = "<<gpa<<endl<<endl;
    }
};


int main()
{
    Student Nihal,Nabil,Fahim;

    Nihal.id=101;
    Nihal.gpa=5;
    Nihal.display();

    Nabil.id=102;
    Nabil.gpa=4;
    Nabil.display();

    Fahim.id=103;
    Fahim.gpa=3;
    Fahim.display();






    getch();

}

