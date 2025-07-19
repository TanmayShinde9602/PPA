#include<iostream>

using namespace std;

class Demo
{
    public:
    int a;
    int b;

    void Fun()
    {
        cout<<"Inside the Fun \n";
    }

    void Gun()
    {
        cout<<"Inside the Gun \n";
    }
};

int main()
{
      Demo obj;

      cout<<sizeof(obj)<<"\n";

      obj.a = 10;
      obj.b = 20;

      obj.Fun();
      obj.Gun();

      cout<<"The value of is:-\n"<<obj.a<<"\n";
      cout<<obj.b<<"\n";     
 
    return 0;
}