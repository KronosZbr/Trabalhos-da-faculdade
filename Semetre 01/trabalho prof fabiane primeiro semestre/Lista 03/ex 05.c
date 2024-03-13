#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    int x = 0; 
    
        printf("Digite um numero:\n ");
        scanf("%d", &n);
        while (i >= 0 && i <10)
        {
            i++;
            x = n * i;
            printf("\n multiplicacao igual a: %d X %d = %d \n", n,i,x);
        }
}