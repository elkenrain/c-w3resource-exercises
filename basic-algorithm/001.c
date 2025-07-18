#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, result;

    printf("Input first value: ");
    scanf("%d", &x);
    printf("Input second value: ");
    scanf("%d", &y);

    result = x + y;
    if (x == y)
    {
        result = 3 * result;
    }
    printf("The result is %d\n", result);

    return 0;
}
