//número antecessor e sucessor
#include <stdio.h>//declarando bibliotecas
#include <conio.h>//declarando bibliotecas
#include <math.h>//declarando bibliotecas
int main() {//inicio do codigo
int n1,ant,suc;//declarando variaveis
 printf("digite o valor do numero: \n");//fazer uma pergunta ao usuário
 scanf("%d", &n1);//coletar o dado do usuário
ant = n1 - 1;//número antecessor
suc = n1 +1;//número sucessor
printf("\n o numero escolhido foi o %d",n1);//printa o resultado
printf("\n o numero antecessor vai ser o: %d",ant);//printa o resultado
printf("\n o numero sucessor vai ser o: %d",suc);//printa o resultado

}