#include<stdio.h>

int main()
{

int Arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

printf("%d\n",sizeof(Arr));    //48    1 integer 4 byte cha mag 12 int he 48 byte 

printf("%d\n",Arr[1][0]); //5
printf("%d\n",Arr[2][1]);  //10
printf("%d\n",Arr[1][1]);  //6
printf("%d\n",Arr[0][2]);  // 3
printf("%d\n",Arr[1][3]);  //8
    return 0;
}
