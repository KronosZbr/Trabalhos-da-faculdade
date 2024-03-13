#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
float a,b,c,d;
printf("\n Coloque o valor de A: ");
scanf("%f",&a);
 printf("\n Coloque o valor de B: ");
scanf("%f",&b);
   d =(sqrt(c=pow(a,2)+pow(b,2)));
   if(d>100){
      printf("hipotenusa excede o tamanho permitido para area");
   }
   else{
      printf("\n o valor da hip e igual: %0.2f",d);
   }
}