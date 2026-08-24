#include <stdio.h>

int main()
{
    int arr[5];
    int n = 4;
    int value;

    printf("Enter %d array elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = value;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}