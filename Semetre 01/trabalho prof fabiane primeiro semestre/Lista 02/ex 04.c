#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
float idade, peso;
printf("Digite sua idade: ");
scanf("%f",&idade);
printf("\n Digite seu peso: ");
scanf("%f",&peso);
if(idade>=18 &&idade<=67 && peso>50){
printf("voce pode doar sangue");
}
else if((idade<18 &&idade>67) || peso<50){
printf("voce nao pode doar sangue");
}
}
