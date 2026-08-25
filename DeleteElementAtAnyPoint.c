#include <stdio.h>

int main()
{
    int arr[5];
    int n = 5;
    int pos;

    printf("Enter %d array elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the index position to delete: ");
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
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