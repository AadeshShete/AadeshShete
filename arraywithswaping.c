#include<stdio.h>
#define LINE printf("\n-----------------------------------------------------\n");
int main()
{
    // reversing the array elements 
    int n;
    printf("\nEnter the size of array : = ");
    scanf("%d", &n);

    int arr[n]; // arr is array of size n ( enetred by user )

    printf("\nEntre the values of array : =  ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }  

    printf("\nThe values of array in reverse order : =  ");
    for (int  i = n-1; i >= 0  ; i--)
    {
        printf("\n arr[%d] = %d ",i,arr[i]);
    }

    int start = 0 , end = n - 1 ;
    while (start < end )
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    
    
    printf("\nThe values after reversing the array is : =  ");
    for (int  i = 0; i < n  ; i++)
    {
        printf("\n arr[%d] = %d ",i,arr[i]);
    }
    return 0;
}
