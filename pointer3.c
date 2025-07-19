#include<stdio.h>

int main()

{
     int no = 11;
     int *p = &no;
     int**q = &p;
     
printf("%d\n",p);
printf("%d\n",*p);
printf("%d\n",**q);
printf("%d\n",&q);
printf("%d\n"&p);

    return 0;
    
}