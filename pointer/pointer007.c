#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr[n];

    printf("Input %d number of elements in the array\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        ptr[i] = &arr[i];
        scanf("%d", ptr[i]);
    }

    printf("The elements you entered are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("element - %d: %d\n", i, *ptr[i]);
    }

    return 0;
}
