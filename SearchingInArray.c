#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int value;
    int found = 0;

    printf("Array before insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the value to search:");
    scanf("%d", &value);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("Found\n");
            found = 1;
            break;
        }
    }

    if (!found)

    {
        printf("Element not found\n");
    }

    return 0;
}    
        