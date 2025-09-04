#include<stdio.h>
int main()
{

    char ch='a';
    int i =11;
    float f =90.56;
    double d=34.4563;

    int arr [5];
    int brr[5];
    int crr[6];
    int drr[2]= {1, 56};

    printf("ch : %d\n", sizeof (ch));
    printf("i :%d\n", sizeof i);
    printf("f :%d\n", sizeof f);
    printf("d :%d\n", sizeof d);

    printf("arr :%d\n" , sizeof arr);
    printf("brr :%d\n" , sizeof brr);
    printf("crr :%d\n" , sizeof crr);
    printf("drr : %d\n" , sizeof drr);
    

    printf("brr chya 0 elemnt chi size :%d\n", sizeof(brr[0]));
    printf("brr chya 2 elemnt chi size :%d \n", sizeof(brr[2]));
    return 0;
}