#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, x, sbolas, tt;

    printf("digite o numero de bolas\n");
    scanf("%i", &n);

    sbolas = n;
    tt = 0;
    while (sbolas >= 1)
    {

        while (n >= 1)
        {
            x = 1;
            while (x <= n)
            {
                tt = tt + 1;
                x = x + 1;
            }

            n = n - 1;
        }
        n = sbolas;
        n = n - 1;
        sbolas = sbolas - 1;
    }
    printf("total vai ser igual a %i\n", tt);
}
