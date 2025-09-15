#include<stdio.h>

int Multipication(int No1, int No2)
{
    int Ans =0;
    Ans =No1*No2;
    return Ans;
}

int main()
{

    int Value1=0, Value3=0, Ret=0;

    printf("enter the first No \n");
    scanf("%d",&Value1);

    printf("Enter the second NO \n");
    scanf("%d",&Value3);

    Ret = Multipication(Value1, Value3);

    printf("Multipication is : %d\n ", Ret);


    return 0;
}