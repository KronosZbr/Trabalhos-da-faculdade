#include <stdio.h>

int main() {
int a = 5;
int b = 4;
 int *ponteiroa=&a;
 int *ponteirob=&b;

 if(&a>&b){
printf("O conteudomaior  eh: %x \n",&a);
 }else{
 
 printf("O conteudo maior eh: %x \n",&b);
 }
printf("O conteudo de A  eh: %x \n",&a);
printf("O conteudo de B  eh: %x \n",&b);
}
