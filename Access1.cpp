#include<iostream>
using namespace std;

class Base 
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()      //constructor kayam public madhye detat because automatically called
        {
            i=10;
            j=20;
            k=30;

        }
         void gun()
          {
                cout<<i<<"\n";  //Allowed karan same class madhe aahe kiva public pn ahe 
                cout<<j<<"\n";  //Allowed kaaran he Base class madhe aahe .
                cout<<k<<"\n";  //Allowed -------------||-----------------
          } 

};
    class Derived : public Base
    {
        public:          
         void Fun()
          {
                cout<<i<<"\n";  //Allowed  kaaran public aahe 
                cout<<j<<"\n";  // Not Allowed  karan te Base class madhe aahe m
                cout<<k<<"\n";  // allowed because protected he tyachya child sathich protect krun thevat 
          } 
    };
int main ()
{
       Base bobj;

       cout<<bobj.i<<"\n";  //Allowed to dispaly kaaran public aahe 
       cout<<bobj.j<<"\n";  //NOT Allowed kaaran private aahe 
       cout<<bobj.k<<"\n";  //NOT Allowed karan main he Base class ch child nahiye 

    return 0;

}