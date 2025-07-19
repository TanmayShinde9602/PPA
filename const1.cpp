#include<iostream>
using namespace std;

int main()
{
      int No1 = 10;
      const int No2 = 10;

      No1++;      //ALLOWED 
      No2++;      //NOT ALLOWED karan No2 ha const aahe 

      No1 = 21;    //Allowed 
      No2 = 21;    //Not Allowed


    return 0;
}