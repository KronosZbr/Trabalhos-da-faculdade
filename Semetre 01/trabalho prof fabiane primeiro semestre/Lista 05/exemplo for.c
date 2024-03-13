#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
int i, soma = 0,x;
for ( i = 1; i < 6; i++)
{
printf("\n Valor %d: ",i);
scanf("%d",&x);
soma = soma +x;

}
printf("\n a soma deu: %d",soma);


}