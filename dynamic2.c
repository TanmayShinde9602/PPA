#include<stdio.h>  //standerd input output
#include<stdlib.h> //standerd library

int main()
{
        int *ptr = NULL;

        ptr = (int *)malloc(5 * sizeof(int));

        free(ptr);

    return 0;
}