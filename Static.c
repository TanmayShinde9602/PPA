#include<stdio.h>

void Display()
{
    int i = 10;
    static int j = 10;

    i++;
    j++;

    printf("Value of i is :%d\n",i); // 11 11 11 11 
    printf("Value of j is :%d\n",j); //11 12 13 14
}

int main()
{ 
    Display();
    Display();
    Display();
    Display();

    return 0;
}
// static kelya mule function 4 vela call kel pn memory ekda allocate zalati tilach 
//reffer karate aani pudachi procedure 