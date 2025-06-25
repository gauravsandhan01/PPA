#include<stdio.h>
int Addtion(int No1 ,int No2,int No3)
{
    int Ans=0;
    Ans= No1+ No2+No3;
    return Ans;
}
int Substraction(int No1, int No2)
{
    int Ans=0;
    Ans=No1- No2;
    return Ans;
}
int main()
{
    int A=10;
    int B=22;
    int C=8;
    int Ret=0;
    int Sau=0;

    printf("Inside main Function\n");

    Ret=Addtion(A,B,C);
    Sau=Substraction(A,B);
    
    printf("%d\n",Ret);
    printf("%d\n",Sau);
    return 0;

}