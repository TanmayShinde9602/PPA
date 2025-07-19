#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo 
    {
        public:
        void Display()
        {
            cout<<"Inside Display method\n";
        }
    };
}

int main()
{
    Marvellous::Demo obj;
    obj.Display();
    
    return 0;
}
// hya method ne pn karu shakato
//magacha code aani ha same ch aahet ithe scope resolution use kelay..  