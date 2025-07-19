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
    using namespace Marvellous;

    Demo obj;
    obj.Display();
    
    return 0;
}
//ithe aapan multiple Demo class tayar karu shakato..
//te namaspace madhe define krayach..