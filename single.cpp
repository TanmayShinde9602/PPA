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

int main()     // sarvat aadhi constructor call honat
{
     Derived Dobj;
     
    cout<<"Inside the Main function\n";

    cout<<Dobj.i<<"\n";
    cout<<Dobj.j<<"\n";
    cout<<Dobj.x<<"\n";
    cout<<Dobj.y<<"\n";

    
    Dobj.Gun();
    Dobj.Fun();
    // cout<<sizeof(Bobj)<<"\n";
    // cout<<sizeof(Dobj)<<"\n";

    return 0;
}