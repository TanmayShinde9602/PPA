#include<stdio.h>

#pragma pack(1)
struct Demo 
{
     int i;
     float f;
     char ch;
     double d;
};

union  Hello
{
     int i;
     float f;
     char ch;
     double d;
};
int main ()

{
       struct Demo dobj;    // dobj kahi concept nahiye phakt object ch name aahe Demo cha d lavala phakt obj la 
       union Hello hobj;
       printf("Size of Structure is : %d\n",sizeof(dobj));
       printf("Size of Union is : %d\n",sizeof(hobj));
       
    return 0;
}