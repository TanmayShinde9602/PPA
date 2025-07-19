#include<stdio.h>

 int main()
 {
   int i = 10;
   float f = 78.90;
   double d = 78.96757;
   char c = 'D';

   printf("%d\n",sizeof(i)); // int size is 4 byte 
   printf("%d\n",sizeof(f)); // float size is 4 byte 
   printf("%d\n",sizeof(d)); // double size is 8 byte 
   printf("%d\n",sizeof(c)); // character size is 1 byte 
     return 0;
 }