#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, result;

    printf("Input a number: ");
    scanf("%d", &num);
    result = abs(51 - num);
    printf("The absolute difference between 51 and the entered number is %d\n", result);

    return 0;
}