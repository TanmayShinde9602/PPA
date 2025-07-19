#include<iostream>
using namespace std;

int main()
{
     int arr[5];    //static memory

     int *ptr = NULL;    //step1 - allocate the memory

     ptr = new int [5];    //step 2- use the memoryn logic

     delete[]ptr;

    return 0;
}