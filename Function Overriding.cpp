#include<iostream>
#include<conio.h>
using namespace std;

class person
{
public:
    void display()
    {
         cout<<"I am a person "<<endl;
    }

};

class student : public person
{
public :
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};

class teacher : public person
{
public :
    void display()
    {
        cout<<"I am a Teacher"<<endl;

    }
} ;

int main()
{
    person p1;
    p1.display();

    student s1;
    s1.display();

    teacher t1;
    t1.display();

    getch ();
}
