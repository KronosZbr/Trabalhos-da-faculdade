#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main(){
int idade;
int sex;
char nome [80];
printf("Digite o nome ai SEU bosta: ");
scanf("%s",nome);
printf("Digite seu sexo 0 para masculino 1 para feminino: ");
scanf("%d", &sex);
printf("\n Digite sua idade: ");
scanf("%d", &idade);
if((sex==1)&& idade<25){
    printf("\n %s ACEITA", nome);
}
else{
    printf("\n %s NAO ACEITO", nome);
}
    
}