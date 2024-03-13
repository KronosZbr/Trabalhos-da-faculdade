#include <stdio.h>
int main()
{
    int n, bolas;
    int cont = 0;
    printf("Informe valor para n\n");
    scanf("%i", &n);
    bolas = n;
    while (n > 0)
    {
        while (bolas > 0)
        {
            cont = cont + bolas;
            bolas = bolas - 1;
        }
        n = n-1;
        bolas = n;
    }
    printf("%d", cont);
}
