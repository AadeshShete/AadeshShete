#include<stdio.h>

int main()
{
    int n;
    printf("Enter the integer");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("\n%d*%d=%d",n,i,n*i);
    }
    return 0;
}