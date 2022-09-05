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
    Student(int x , double y)
    {
        id=x;
        gpa=y;
    }
};


int main()
{
    Student Nihal(101,5);
    Nihal.display();


    Student Nabil(101,4);
    Nabil.display();

    Student Fahim(101,3);
    Fahim.display();








    getch();

}

