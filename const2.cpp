#include<iostream>
using namespace std;

class Demo
{
    public:
    int No1, No2;
    const int No3;
    const int No4;

    Demo() : No3(30), No4(40)     //INITALIZATION LIST
    {
        No1 = 10;
        No2 = 20;
    }  

    Demo(int A, int B,int C,int D) : No3(C), No4(D)  
    {
        No1 = A;
        No2 = B;
    }
};
int main()
{
    Demo obj;
    cout<<obj.No1<<"\t"<<obj.No2<<"\t"<<obj.No3<<"\t"<<obj.No4<<"\n";

    Demo obj1(10,20,33,44);
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\t"<<obj1.No3<<"\t"<<obj1.No4<<"\n";

    return 0;
}