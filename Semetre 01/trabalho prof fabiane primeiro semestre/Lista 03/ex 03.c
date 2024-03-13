#include <stdio.h>

int main()
{
   int n =1;
   int cont = 0;
   int soma =0;

   while (cont<10)
   {
    cont ++;
printf("Digite um numero:\n ");
    scanf("%d",&n);
    soma = soma +n;

   }
   soma = soma/cont;
   printf("A media vai ser %d",soma);
}