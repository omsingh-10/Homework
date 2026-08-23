#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4};
    int n = 4;
    int value, pos;

    printf("Array before insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    printf("Enter the position to insert at (0-indexed): ");
    scanf("%d", &pos);

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}