#include<iostream>
using namespace std;

class Demo
{
    public:
       int i,j;
       static int k;

       Demo()
       { 
        i=10;
        j=20;
       }
       void Fun()
       {
        cout<<"Inside Non Static Fun \n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";            //this pointer used here ..
        cout<<k<<"\n";
       }
       static void Gun()
       {
        cout<<"Inside the static Gun \n";
        cout<<k<<"\n";
       }
};
int Demo :: k = 30;

int main()
{
   cout<<"Value of k is :"<<Demo::k<<"\n";
   Demo::Gun();

   Demo obj1;
   
   obj1.Fun();
   
   obj1.Gun();

   cout<<"Value of k using object : ";
    return 0;
}