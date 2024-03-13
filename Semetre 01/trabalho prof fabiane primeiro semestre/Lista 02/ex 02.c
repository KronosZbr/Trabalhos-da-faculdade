#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if ((idade < 18) || (idade > 70))
    {
        printf("voce tem %d anos e seu voto vai ser facultativo", idade);
    }
    else 
    if(idade >=18 && idade<=70){
printf("voce tem %d anos e seu voto vai ser obrigatorio", idade);
    }
}