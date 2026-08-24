#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Array before deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Shift all elements one position to the left to delete first element
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}