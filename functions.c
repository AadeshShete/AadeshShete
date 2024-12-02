#include<stdio.h>
#define LINE printf("\n --------------------------------");

void table();
int main()
{
    printf("\n Before table()");
    table();
    printf("\nafter table()");
    return 0;
}

void table()
{
    int n=2;
    for(int i=1;i<=10;i++)
    {
        printf("\n%d",n,i,n*i);
    }
}