#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
float te,vb,vn,vl;
float pvb, pvn, pvl;
printf("Digite o total de eleitores que votaram: ");
scanf("%f", &te);
printf("\n Digite o total de votos brancos: ");
scanf("%f", &vb);
printf("\n Digite o total de votos nulos: ");
scanf("%f", &vn);
printf("\n Digite o total de votos validos: ");
scanf("%f", &vl);
pvb = (vb/te)*100;
pvn = (vn/te)*100;
pvl = (vl/te)*100;
printf("\n O total de votos brancos vai ser de %0.2f e em porcentagem vai ser igual a: %0.2f",vb,pvb);
printf("\n O total de votos nulos vai ser de %0.2f e em porcentagem vai ser igual a: %0.2f",vn,pvn);
printf("\n O total de votos validos vai ser de %0.2f e em porcentagem vai ser igual a: %0.2f",vl,pvl);

}