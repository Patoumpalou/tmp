#include <stdio.h>

int main(void)
{
    int number;
    int i;
    int total;

    number = 4;
    i = 1;
    total = 0;
    while (i <= number)
    {
        total = total + i;
        i = i + 1;
    }
    printf("%d", total);
    return 0;
}
