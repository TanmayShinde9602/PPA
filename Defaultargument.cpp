#include<iostream>
using namespace std;

float CalculateArea(float Rad, float PI = 3.14f)   //ith aapan PI chi default value dili aahe 
{
    float Ans = 0.0;
    Ans = PI * Rad * Rad;
    return Ans;
}

int main()
{
      float Ret = 0.0f;

      Ret = CalculateArea(10.5f,3.14f);
      cout<<"Area of Circle is : "<<Ret<<"\n";

      Ret = CalculateArea(10.5f);  // ith Aapan 2nd papmeter nahi dila mg te default value ghnar 
      cout<<"Area of Circle is : "<<Ret<<"\n";

      Ret = CalculateArea(10.5f,7.20f);
      cout<<"Area of Circle is : "<<Ret<<"\n";

    return 0;
}