#include <stdio.h>

int main() 
{
    int arr[5]= {1, 2, 3, 4, 5};
    int n = 4;
    int value;

    printf("Array before insertion: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    arr[n] = value;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}