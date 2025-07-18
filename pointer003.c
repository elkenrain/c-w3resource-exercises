#include <stdio.h>

int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *ptr_int = &m;
    float *ptr_float = &fx;
    char *ptr_char = &cht;

    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("-------------------------------------------------------\n");
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    printf("\n");
    printf("Using & operator :\n");
    printf("----------------------\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);

    printf("\n");
    printf("Using & and * operator :\n");
    printf("--------------------------\n");
    printf("value at address of m = %d\n", *&m);
    printf("value at address of fx = %f\n", *&fx);
    printf("value at address of cht = %c\n", *&cht);

    printf("\n");
    printf("Using only pointer variable :\n");
    printf("-------------------------------\n");
    printf("address of m = %p\n", ptr_int);
    printf("address of fx = %p\n", ptr_float);
    printf("address of cht = %p\n", ptr_char);

    printf("\n");
    printf("Using only pointer operator :\n");
    printf("-------------------------------\n");
    printf("value at address of m = %d\n", *ptr_int);
    printf("value at address of fx = %f\n", *ptr_float);
    printf("value at address of cht = %c\n", *ptr_char);

    return 0;
}
