#include<iostream>
using namespace std;

class Demo
{
    public:
       int A;
    private:
       int B;
    public:
       Demo()
       {
        A = 11;
        B = 21; 
       }
       void Fun()
       {
        cout<<"Value of A : "<<A<<"\n";  //HE CLASSCHYA PUBLIC MADHE AAHE MHANUN HE PRINT HOIL 
        cout<<"Value of B : "<<B<<"\n";  //HE PRIVATE MADHE AHE PN HE CLASS CHYA AAT AAHE MHNUN HE PN PRINT HOIL

       }
};
int main()
{
      Demo obj;
      obj.Fun(); // HE PRINT HOIL KARAN PUBLIC MADHE AAHE 
      cout<<"Value of A : "<<obj.A<<"\n"; //HE PRINT HOIL KARAN HE PUBLIC MADHE AAHE 
      cout<<"Value of B : "<<obj.B<<"\n"; //HE NAHI PRINT HONAR KARAN HE PRIVATE MADHE AAHE ANI HE CLASS CHYA BAHER AAHE

    return 0;
}