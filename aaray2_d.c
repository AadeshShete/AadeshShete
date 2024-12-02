#include<stdio.h>
int main()
{   
    // pointer arithmetic for 2d array 

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int brr[3][3] = {
        {11,22,33},
        {44,55,66},
        {77,88,99}
    };

    int crr[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    // addition of 2d matrix using pointer arithemetic 
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            //crr[i][j] = arr[i][j] + brr[i][j]
            *(*(crr+i)+j) = *(*(arr+i)+j)  + *(*(brr+i)+j);
        }    
    }
    
    printf("\nThe result is : =  \n");
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("| %d |",*(*(crr+i)+j));
        }
        printf("\n");
    }
    

    // pointer arithmetic for 1d array 
    /*int arr[5];
    printf("\nEnter the 5 values for array : = ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",(arr+i)); // same as &arr[i]
    }

    printf("\nThe values of array are : = ");
    for (int  i = 0; i < 5; i++)
    {
        printf("| %d |",*(arr+i)); // same as arr[i]
    }*/
    
    






    return 0 ;
}
