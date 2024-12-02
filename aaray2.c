#include<stdio.h>
int main()
{
    int arr[n];
    printf("\n Enter the value of n:");
    scanf("%d",arr[n]);
    int max=arr[n];
    int min=arr[n];

    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("\n the maximum values is:%d",max);
    printf("\n the minimum values is:%d",min);
}
