#include <stdio.h>

int main()
{
    int x, y, sum;
    int *ptr, *qtr;

    printf("Input the first number: ");
    scanf("%d", &x);
    printf("Input the second number: ");
    scanf("%d", &y);

    ptr = &x;
    qtr = &y;

    sum = *ptr + *qtr;

    printf("The sum of the entered numbers is %d\n", sum);

    return 0;
}