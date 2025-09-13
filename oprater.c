#include<stdio.h>
int main()
{

    int No=30;

    printf("return no %d \n", No);

    printf("Address of NO %d \n" , &No);

    No++;

    printf("return no ++ %d \n", No);

    printf("size of No %lu \n" ,sizeof No); //lu long unsinged      

    No--;
    printf("return  no -- %d \n", No);

    return 0;
}