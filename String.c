#include<stdio.h>
#include<String.h>

int main()
{
    char Arr[] =  {'H','e','l','l','o','\0'};
    char Brr[] =  "Hello";

    printf("%d\n",sizeof(Arr));     // 6  karan character chya 5 byte aani '\0'chi 1 byte total 6 
    printf("%d\n",sizeof(Brr));      // 6  karan character chya 5 byte aani '\0'chi 1 byte total 6

    printf("Length of strung is :%d",strlen(Arr));  //5 karan aapn string.h header filr getali aani tyani arr chi size kadtoy tya veles \0 chi 1 byte count nahi hot 
    return 0;
}
