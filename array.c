#include<stdio.h>
int main()
{
    int arr[9]={11,22,33,44,55,0,4,79,13};
    int max=arr[0];
    int min=arr[0];

    for(int i=0;i<9;i++)
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
