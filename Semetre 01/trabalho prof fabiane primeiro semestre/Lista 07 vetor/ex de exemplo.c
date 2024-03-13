#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
int idade [3];
int x = 0;
for(x=0;x<=2;x++){
printf("\n Informe a idade: ");
scanf("%i",&idade[x]);
}
for(x=0;x<=2;x++){
printf("\n A idade na posicao [%i] vai ser igual a: %i",x,idade[x] ); 

}

}