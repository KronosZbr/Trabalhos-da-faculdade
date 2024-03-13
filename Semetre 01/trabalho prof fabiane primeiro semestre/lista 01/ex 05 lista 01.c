#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
int anos, mes, dia, total;
int tanos, tmes;
printf("\n digite sua idade em anos ");
scanf("%d", &anos);
printf("\n digite sua idade em meses ");
scanf("%d", &mes);
printf("\n digite sua idade em dias ");
scanf("%d", &dia);
tanos = anos*365;
tmes = mes*30;
total = tanos + tmes + dia;
printf("sua idade de %d anos %d mes(es) e %d dias expressa somente em dias vai ser de %d dias"
,anos,mes,dia,total);

}