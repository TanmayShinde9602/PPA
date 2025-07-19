#include<iostream>
using namespace std;

class Base 
{
    public:
       void Fun()                         //DEFINATION
       {
        cout<<"Inside Base Fun\n";
       }
};

class Derived : public Base 
{
    public:
       void Fun()                        //REDEFINATION
       {
        cout<<"Inside Derived Fun\n";
       }
};

int main()
{
     cout<<sizeof(Base)<<"\n"; 
     Derived Dobj;
     Dobj.Fun();

     Base Bobj;
     Bobj.Fun();

    return 0;
}