#include <stdio.h>

int add(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int x, y, sum;

    printf("Input the first number: ");
    scanf("%d", &x);
    printf("Input the second number: ");
    scanf("%d", &y);

    sum = add(&x, &y);

    printf("The sum of %d and %d is %d\n", x, y, sum);

    return 0;
}
