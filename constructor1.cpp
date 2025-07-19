#include<iostream>

using namespace std;

class Marvellous 
{

    public:
       int no1;
       int no2;

       Marvellous()
       {
        cout<<"Inside Default Constructor \n";
       }

       Marvellous(int A, int B)
       {
        cout<<"Inside parameterized constructor\n";
        no1 = A;
        no2 = B;
        cout<<"Value of No1 is :"<<no1<<"\n";
        cout<<"Value of no2 is :"<<no2<<"\n";
       }

       ~Marvellous()
       {
          cout<<"Inside Destructor \n";
       }

       void Fun()
       {
        cout<<"Inside Fun \n";
       }
};

int main()
{  
       Marvellous obj1;
       Marvellous obj2(11,21);
       obj1.Fun();
       
    return 0;
}
