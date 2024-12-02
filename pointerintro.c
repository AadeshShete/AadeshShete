#include<stdio.h>
int main()
{
    int a=10,b;
    printf("\n the address of a=%d,&a=%d",a,&a);

    int *ptr;//decleration of pointer
    ptr=&a;//pointer ptr pointing to a

    int *qtr=&b;//pointer qtr pointing to b

    *ptr=123456;
    ptintf("\n the values of a using pointer *ptr =%d",*ptr);
    printf("\n the value of a=%d",a);

    printf("\n -------------------------------\n");
    printf("\n Enter the of a and b:");
    scanf("%d%d",ptr,qtr);

    result=*ptr +*qtr;
    printf("\n the result is:%d",result);
    

}