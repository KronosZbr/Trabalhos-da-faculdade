#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(){
int a,n,mult = 0;
printf("Digite um numero para ver a tabuada: ");
scanf("%d",&n);
for (a=1;a<=10;a++)
{
    mult = n *a;
   printf("%d, ",mult);
}
}


    
