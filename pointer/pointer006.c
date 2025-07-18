#include <stdio.h>

int main()
{
    int x, y, max;
    int *ptr = &x, *qtr = &y;

    printf("Input the first number: ");
    scanf("%d", ptr);
    printf("Input the second number: ");
    scanf("%d", qtr);

    if (*ptr > *qtr)
    {
        max = *ptr;
    } else
    {
        max = *qtr;
    }

    printf("%d is the maximum number.\n", max);

    return 0;
}
