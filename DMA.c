#include <stdio.h>
#include <stdlib.h> // header file DMA
int main()
{
    int n, i, m;
    printf("\n Enter how mauy ints u want : = ");
    scanf("%d", &n);

    // allocating a momory for array
    // int *arr = (int * )malloc(n * sizeof(int));
    int *arr = (int *)calloc(n, sizeof(int)); // allocates n * 4 bytes in memory

    if (arr != NULL)
    {
        printf("\nEnter the value of array : = ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", arr + i); // same as &arr[i]
        }

        printf("\n The values of the array are : = \n");
        for (i = 0; i < n; i++)
        {
            printf("%d , ", *(arr + i)); // same as arr[i]
        }

        printf("\n Enter how many more ints u want : = ");
        scanf("%d", &m);

        arr = (int *)realloc(arr, m * sizeof(int)); // it will increase the size by m bytes

        printf("\nEnter the new value of array : = ");
        for (i = n; i < (n + m); i++)
        {
            scanf("%d", arr + i);
        }

        printf("\n The new array is : = ");
        for (i = 0; i < (n + m); i++)
        {
            printf("%d ", *(arr + i));
        }
    }
    else
    {
        printf("\n Sorry Memory cant be allocated ...! \n");
    }

    free(arr);
    printf("\n The memory is deallocated ...! \n");

    return 0;
}