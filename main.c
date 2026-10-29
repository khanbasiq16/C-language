#include <stdio.h>

int main(void)
{
    int first = 1000;
    int second = first ;

    first = 2000;

    printf("First : %d \n", first);
    printf("Second : %d", second);

    return 0;
}