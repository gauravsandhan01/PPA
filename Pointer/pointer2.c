#include<stdio.h>

int main()
{

    int i =11;
    char ch ='a';
    float f =89.99f;
    double d =90.9999;

    int *iptr =&i;
    char *cptr =&ch;
    float *fptr =&f;
    double *dptr =&d;


    printf("%d \n", iptr);
    printf("%d \n", &i);

    printf("%d \n",sizeof i);
    printf("%d \n",sizeof iptr);
    printf("%d \n",sizeof *iptr);


    return 0;
}