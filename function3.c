#include<stdio.h>

void fun();
void gun();

int main ()

{
printf("Inside main function");

      fun();

      printf("End of main function");

    return 0;
}

void gun()
{
    printf("Inside gun");

}

void fun()
{

    printf("Inside fun");
    gun();
    printf("End fun")
}