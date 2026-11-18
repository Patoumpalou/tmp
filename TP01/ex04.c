#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int delta;
    double racine;
    int i;

    a = 1;
    b = 0;
    c = -1;
    delta = b * b - 4 * a * c;
    printf("Delta = %d\n", delta);
    if (a == 0)
    {
        printf("Ce n'est pas un polynome du second degré\n");
        return 0;
    }
    if (delta < 0)
    {
        printf("Il n'existe aucune solution\n");
    }
    else if (delta == 0)
    {
        printf("Il existe 1 solution\n");
        printf("x = %g\n", -(double)b / (2 * a));
    }
    else
    {
        racine = delta;
        i = 0;
        while (i < 50)
        {
            racine = (racine + delta / racine) / 2;
            i = i + 1;
        }
        printf("Il existe 2 solutions\n");
        printf("x1 = %g\n", (-b - racine) / (2 * a));
        printf("x2 = %g\n", (-b + racine) / (2 * a));
    }
    return 0;
}
