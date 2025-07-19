#include<iostream>
using namespace std;

class Base 
{
    public:
       int i,j;
      virtual void Fun()
       {    cout<<"Inside Base Fun\n";    }     //1000
       void Gun()
       {    cout<<"Inside Base Gun\n";    }     //2000
       virtual void Sun()
       {    cout<<"Inside Base Sun\n";    }     //3000
       void Run()
       {    cout<<"Inside Base Run\n";    }     //4000
};

class Derived : public Base 
{
    public:
    int x,y;
      virtual void Fun()
      {     cout<<"Inside Derived Fun\n";    }    //5000
      void Gun()
      {     cout<<"Inside Derived Gun\n";    }    //6000
      virtual void Sun()
      {     cout<<"Inside Derived Sun\n";    }    //7000
      virtual void Run()
      {     cout<<"Inside Derived Run\n";    }    //8000
};

int main()
{
    cout<<"size of Base class :"<<sizeof(Base)<<"\n";
    cout<<"size of Derived class :"<<sizeof(Derived)<<"\n";
     Derived Dobj;

     Base *bptr = NULL;        

     bptr = &Dobj;         //UPCASTING

     
     bptr->Fun();     // Derived Fun  call honar 
     bptr->Gun();     //Base Gun call hoanr 
     bptr->Sun();     //Derived Sun call hoanr 
     bptr->Run();     //Base Run call honar 

    return 0;
}