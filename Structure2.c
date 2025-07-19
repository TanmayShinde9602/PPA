#include<stdio.h>

#pragma pack(1)
struct Demo
{
  int no;
  float f;
  double d;
  int i;
};

int main()
{

    struct Demo obj1;
    struct Demo obj2;

    printf("%d\n",sizeof(obj1));

    obj1.no = 11;
    obj1.f = 3.1;
    obj1.d = 9.99;
    obj1.i = 21;
    
    obj2.no = 12;
    obj2.f= 5.7;
    obj2.d =3.147;
    obj2.i = 123;

    printf("%d\n",obj1.no);
    printf("%d\n",obj2.f);
    printf("%d\n",obj2.i);
    printf("%d\n",obj2.d);
    return 0;
}