#include<iostream>
using namespace std;

class Base 
{
    public:
       int i,j;
       void Fun()
       {
        cout<<"Inside Base Fun\n";
       }
};

class Derived : public Base 
{
    public:
    int x,y;
       void Fun()
       {
        cout<<"Inside Derived Fun\n";
       }
};

int main()
{
     cout<<sizeof(Base)<<"\n"; 
     Base Bobj;                  //hyachi size 8 byte
     Derived Dobj;               //hyachi size 16 byte 8+8 parent + child

     Base *bptr = NULL;
     Derived *dptr = NULL;

     bptr = &Bobj;
     dptr = &Dobj;
     bptr = &Dobj;
     dptr = &Bobj;     //ERROR

    return 0;
}