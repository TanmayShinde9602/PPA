#include<iostream>

using namespace std;

class Arithmatic
{
    public:
       int No1;
       int No2;

       Arithmatic(int A, int B)
       {
         No1 = A;
         No2 = B;
       }

         int Addition()
         {
             int Ans = 0;
             Ans = No1 + No2;
             return Ans;  
         }

         int Substraction()
         {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
         }
};

int main()
{
    int Value1 = 0, Value2 = 0, Ret = 0;

    cout<<"Enter the first number : \n";
    cin>>Value1;

    cout<<"Enter the second number : \n";
    cin>>Value2;
 
    Arithmatic obj(Value1,Value2);

    Ret = obj.Addition();        //function call
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj.Substraction();     // function call
    cout<<"Substraction is : "<<Ret<<"\n";

    return 0;
}