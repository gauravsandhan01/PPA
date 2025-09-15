#include<stdio.h>
int main()
{

    int Arr[]={11,21,51,101,111,121}; //arr is one deimetilan array it contain 6 element 

    int *p =NULL ;
    int *q =NULL ;

    p = &(Arr[0]);
    q = &(Arr[4]);

    printf("%d arr 3\n" ,Arr[3]);
    printf("%d *p\n" , *p);
    printf("%d *q\n" , *q);
    printf("%d p\n" , p);
    printf("%d q-p \n" , q-p);


    p =p+2;
    printf("%d \n" , *p);

    q =q-2;

    printf("%d \n" , *q);
    return 0;

}