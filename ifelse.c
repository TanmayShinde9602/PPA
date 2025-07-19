#include<stdio.h>

int main()

{
int no = 0;
int Result = 0;

printf("Enter the number :");
scanf("%d",&no);

Result = no%2;
if(Result==0)
{
    printf("THE number is Even \n");
}

else
{
    printf("The numer is Odd \n");
}
    return 0;
}