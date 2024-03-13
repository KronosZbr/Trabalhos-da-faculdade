#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
int ingresso = 0;
int editar;
int maisum;
while(ingresso>=0 || maisum!=2){
printf("QUer editar a forma de pagamento?\n1.SIM\n2.NAO\n3 FINALIZAR EXECUCAO\n");
scanf("%d",&editar);

if(editar==2){
    ingresso++;
}
if(editar==3){
    break;
}
printf("\nNumero do ingresso: %d",ingresso);
printf("\n");
printf("Quer gerar mais um ingresso?\n1.SIM\n2.NAO\n");
scanf("%d",&maisum);

}


}