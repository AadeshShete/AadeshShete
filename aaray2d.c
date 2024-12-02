#include<stdio.h>
int main()
{
    int arr[2][2]={
        {1,0},
        {0,0}};

    int brr[2][2]={
    {0,0},
    {1,0}
    };

    int crr[2][2]={
    {0,0},
    {0,0}
    };

    printf("\n Enter the value of the ARR:");
    
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)  
    {
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
    }

    printf("\nThe values of ARR:");
    
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)  
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
    }

    printf("\n Enter the value of the BRR:");
    
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)  
    {
        scanf(" %d ",&brr[i][j]);
    }printf("\n");
    }

    printf("\nThe values of BRR:");
    
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)  
    {
        printf(" %d ",brr[i][j]);
    }
    printf("\n");
    }

    printf("\n Addition of the CRR:");
    
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)  
      {

     for(int k=0;k<2;k++) 
    {
        printf(" %d ",arr[i][j]+brr([i][k]*[j][k]);
    }
    }
    printf("\n");
    }
return 0;
}