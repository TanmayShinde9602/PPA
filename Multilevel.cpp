#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    Base()
    {
        cout<<"Inside Base Constructor\n";
        i=10;
        j=20;
    }
    ~Base()
    {
        cout<<"Inside Base Destructor\n";
    }
    void Fun()
        {
            cout<<"Inside Base Fun\n";
         }

};

class Derived : public Base
{
      public: 
         int x,y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x=30;
            y=40;   
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};
class DerivedX : public Derived
{
    public: 
        int a,b;
        DerivedX()
        {
            cout<<"Inside th DerivedX Constructor\n";
            a = 50;
            b = 60;
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside DerivedX Sun\n";
        }
};

int main()
{
     
     DerivedX Dobj;

    cout<<"Inside the Main function\n";
    cout<<"size of Base Class"<<sizeof(Base)<<"\n";   //8
    cout<<"size of Derived Class"<<sizeof(Derived)<<"\n";  //16
    cout<<"size of DerivedX Class"<<sizeof(DerivedX)<<"\n";  //24

    cout<<Dobj.i<<"\n";   //10
    cout<<Dobj.j<<"\n";   //20
    cout<<Dobj.x<<"\n";   //30
    cout<<Dobj.y<<"\n";    //40
    cout<<Dobj.a<<"\n";    //50
    cout<<Dobj.b<<"\n";    //60

    Dobj.Fun();   //Inside Base Fun 
    Dobj.Gun();   //Inside Derived Gun
    Dobj.Sun();   // inside DerivedX Sun
   
    return 0;
}               
                   
                