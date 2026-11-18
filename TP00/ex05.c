#include <stdio.h>

int main(void)
{
    int number;

    number = 42;
    if (number % 2 == 0)
        printf("pair");
    else
        printf("impair");
    return 0;
}
