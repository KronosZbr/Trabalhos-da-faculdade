#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia que tu nasceu: ");
    scanf("%d", &dia);
    printf("Digite o mes que tu nasceu: ");
    scanf("%d", &mes);
    printf("Digite o ano que tu nasceu: ");
    scanf("%d", &ano);
if(dia>0 && dia<32 && mes>0 && mes<13 && ano>0 && ano<2019){
printf("DATA VALIDA");
}
else{
    printf("DATA INVALIDA");
}

}