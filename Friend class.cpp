#include<iostream>
#include<conio.h>
using namespace std;

class A
{

    private:
         int id =101;
         string name ="Sharear";
    public:
         friend class B;

};
class B : public A
{
     public:
         void display(A ob)
         {
             cout<< id <<endl;
             cout<< name <<endl;
         }

};


int main()
{
    A ob1;
    B ob2;


    ob2.display(ob1);



    getch();
}

