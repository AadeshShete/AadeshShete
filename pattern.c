#include<stdio.h>
int main()
{
    int k = 0 ; 
    for (int i = 1; i <= 9; i++)
    {
        (i <= 5 )? k++:k--;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - k && j <= 4 + k  )
            {
                printf("%d ",i%2);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
