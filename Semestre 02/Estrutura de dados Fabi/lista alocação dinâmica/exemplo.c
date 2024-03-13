#include <stdio.h>
#include <stdlib.h>
int main(){
int x;
x = sizeof(int);
printf("Tamanho int: %i \n",x);
x = sizeof(float);
printf("Tamanho float: %i \n",x);
x = sizeof(double);
printf("Tamanho double: %i \n",x);
x = sizeof(char);
printf("Tamanho char: %i \n",x);
system("pause");

}