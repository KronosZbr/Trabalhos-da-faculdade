#include <stdio.h>
#include <stdlib.h>
int comb(int n, int k)
{
    if (k == 1)
    {
        return 1;
    }
    else if (k == n)
    {    
        return 1;
    }
    else if (k > 1 && n > k)
    {
        return comb(n - 1, k - 1) + comb(n - 1, k);
    }
}

int main()
{
    int n, k;
    printf("\n Digite a qtdade de pessoas por grupos: ");
    scanf("%d", &k);
    printf("\n Digite a qtdade de pessoas disponiveis: ");
    scanf("%d", &n);

    printf("\n A quantidade de grupos eh: %i ", comb(n, k));
}