#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
char cidade[30];
float eleitores, vc1, c1;
   printf("Digite o nome da cidade: ");
   scanf("%s",cidade);
   printf("\n Digite o numero de eleitores: ");
   scanf("%f",&eleitores);
   printf("\n Digite o numero de votos do candidato mais votado: ");
   scanf("%f",&c1);
vc1=((c1*100)/eleitores);
printf("A porcetagem de votos da cidade %s foi de %0.2f por cento ",cidade,vc1);
if(vc1<50){
printf("\n VAI TER SEGUNDO TURNO");
}
else{
    printf("\n FIM DA ELEICAO");
}
}
