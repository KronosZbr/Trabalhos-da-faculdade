#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
 float n1,n2;
 float soma,sub,div,mult;
 char esc;
 printf("digite o valor do numero 1: ");
 scanf("%f", &n1);
  printf("digite o sinal da operacao que voce quer fazer: ");
 scanf("%s", &esc);
 printf("digite o valor do numero 2: ");
 scanf("%f", &n2);
if(esc=='+'){
    soma = n1+n2;
printf("\n o valor da soma vai ser de: %0.2f",soma );
}
else 
if(esc=='-'){
    sub = n1-n2;
printf("\n o valor da subtracao vai ser de %0.2f",sub);
}
else 
if(esc=='/'){
    if(( n2<=0)){
printf("Nao pode dividir 0");
}
else
if(n2>0){
     div= n1/n2;
  printf("\n  o valor da divisao vai ser de: %0.2f",div);  
}
}
else 
if(esc =='*'){
    mult = n1*n2;
 printf("\n o valor da multiplicacaoo vai ser de: %0.2f",mult);   
}
return 0;
}