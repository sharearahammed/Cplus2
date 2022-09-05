#include<iostream>
#include<conio.h>
using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout<<"Hello ! "<<endl;
    }
    virtual void sendMessage()=0;
};
class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hi , This is Rahim"<<endl<<endl;
    }
};
class Karim : public MobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hi , This is Karim"<<endl;
    }
};



int main()
{
    MobileUser *m;

    Rahim r;
    Karim k;

    m = &r;
    m->call();
    m->sendMessage();

    m = &k;
    m->call();
    m->sendMessage();


    getch();
}
