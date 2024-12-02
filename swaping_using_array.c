#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    swap(&arr[1], &arr[4]);
    swap(&arr[0], &arr[5]);
    swap(&arr[2], &arr[3]);
    

    // Print the array after swapping
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}