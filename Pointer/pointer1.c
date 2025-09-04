#include<stdio.h>

int main()
{
    int No = 11;
    int *prt = &No ;        //*lal light gadi vrcha
    
    double Data =90.9999;
    double *dptr = &Data;   // pointer create kela 
    

    printf("No :%d \n", No);       // 11
    printf("prt :%d \n", prt);      //address 100 
    printf("Data :%f \n", Data);    // 90.9999         %f float kiva double la chalto
    printf("dptr :%f \n", dptr);    // 90.9999
    
    printf("\n *prt :%d \n", *prt); // 11
    printf("*dptr :%f \n", *dptr);  // 90.9999


    printf("\n Size of NO %d \n" , sizeof No);  //4
    printf("size Of Data %d \n" , sizeof Data); //8
    printf(" Size of Prt %d \n",sizeof prt);    //8
    printf("size Of dptr %d \n" , sizeof dptr); //8
    
    printf("\n size Of *ptr %d \n" , sizeof *prt); //4
    printf("size Of *dptr %d \n" ,sizeof *dptr);   //8
    
    
    
    return 0 ;

}