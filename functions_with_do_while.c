#include<stdio.h>
int i;
int add(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);
int main()
{
    int choice, a,b;
    do 
    {
    printf("\n----------Menu-------------\n");
    printf("\n1:Addition");
    printf("\n2:subtraction");
    printf("\n3:Multiplication");
    printf("\n4:Division");

    printf("\n Enter the choice:");
    scanf("%d",&choice);

    printf("\n enter the value of a nd b:");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
    case 1:
    printf("\nAddition is %d",add(a,b));
    break;
    
    case 2:
    printf("\nSubtraction is %d",sub(a,b));
    break;
    case 3:
    printf("\nMultiplication is %d",mul(a,b));
    break;
    case 4:
    printf("\nDivision is %d",div(a,b));
    break;
    default:
    printf("\n Invalid choice");
    return 0;
    i++;
    }


    }
    printf("\nEnd of loop");

while(choice!=0);
return 0;
}
int add(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}

int mul(int a,int b)
{
return a*b;
}

int div(int a,int b)
{
return a/b;
}