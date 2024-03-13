#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char jogo[5][20],res[10],res1[10],res2[10],res3[10],res4[10],res5[10],letra,resp[5][30],letm[1],var;
    int r,termino=0,e,a1=0,a2=0,a3=0,a4=0,a5=0,esc,i,j,el,x=1;
 void tabela(){
printf("%s\n",jogo[0]);
printf("%s\n",jogo[1]);
printf("%s\n",jogo[2]);
printf("%s\n",jogo[3]);
printf("%s\n",jogo[4]);
 }

int main(){

strcpy(jogo[0], "1| | | | | | | |*|\0");
strcpy(jogo[1], "2| | | | |*|*|*|*|\0");
strcpy(jogo[2], "3| | | | | | | |*|\0");
strcpy(jogo[3], "4| | | | | | | |*|\0");
strcpy(jogo[4], "5| | | | | | | |*|\0");

strcpy(resp[0], "1|o|p|t|i|m|u|s|*|\0");
strcpy(resp[1], "2|x|b|o|x|*|*|*|*|\0");
strcpy(resp[2], "3|c|o|r|i|n|g|a|*|\0");
strcpy(resp[3], "4|t|u|b|a|r|a|o|*|\0");
strcpy(resp[4], "5|m|e|m|o|r|i|a|*|\0");



tabela();

printf("1 - robo alienigena\n");
printf("2 - marca de console\n");
printf("3 - vilao da dc\n");
printf("4 - predador marinho\n");
printf("5 - componente de computador\n");

strcpy(res1,"optimus");
strcpy(res2,"xbox");
strcpy(res3,"coringa");
strcpy(res4,"tubarao");
strcpy(res5,"memoria");

printf("\nvoce poder errar ate 2 palavras e ate 4 letras\n");

e=0;
termino=0;


while(termino!=5 && e !=2 && el!=3 && x!=106){

        printf("tentar por palavra(1) ou por letra(2)\n");
         fflush(stdin);
         scanf("%i",&esc);
         if(esc==1){
printf("Qual voce ira responder?\n");
 fflush(stdin);
scanf("%i",&r);

if(a1==r ||a2==r ||a3==r|| a4==r ||a5==r){
    r=r+10;
}
switch(r){
case 1:
    printf("escreva sua resposta\n");
    fflush(stdin);
    scanf("%s",&res);
            if (strcmp(res1, res)==0){
                printf("voce acertou\n");
                strcpy(jogo[0], "1|o|p|t|i|m|u|s|*|\0");
                termino=termino+1;
                tabela();
                a1=1;


    }else{
        printf("voce errou\n");
    e=e+1;


    }
  break;
case 2:
    printf("escreva sua resposta\n");
    fflush(stdin);
    scanf("%s",&res);
            if (strcmp(res2, res)==0){
                printf("voce acertou\n");
                strcpy(jogo[1], "2|x|b|o|x|*|*|*|*|\0");
                termino=termino+1;
                tabela();
                a2=2;
    }else{
        printf("voce errou\n");
    e=e+1;


    }
break;
case 3:
    printf("escreva sua resposta\n");
    fflush(stdin);
    scanf("%s",&res);
            if (strcmp(res3, res)==0){
                printf("voce acertou\n");
                strcpy(jogo[2], "3|c|o|r|i|n|g|a|*|\0");
                termino=termino+1;
                tabela();
                a3=3;
    }else{
        printf("voce errou\n");
    e=e+1;


    }
break;
case 4:
    printf("escreva sua resposta\n");
    fflush(stdin);
    scanf("%s",&res);
            if (strcmp(res4, res)==0){
                printf("voce acertou\n");
                strcpy(jogo[3], "4|t|u|b|a|r|a|o|*|\0");
                termino=termino+1;
                tabela();
                a4=4;
    }else{
        printf("voce errou\n");
    e=e+1;


    }
break;
case 5:
    printf("escreva sua resposta\n");
    fflush(stdin);
    scanf("%s",&res);
            if (strcmp(res5, res)==0){
                printf("voce acertou\n");
                strcpy(jogo[4], "5|m|e|m|o|r|i|a|*|\0");
                termino=termino+1;
                tabela();
                a5=5;
    }else{
        printf("voce errou\n");
    e=e+1;


    }
 break;
default:
    printf("alternativa invalida\n");
break;
}
}else if(esc==2){
//o, t, i, m, u, s, c, r, n, g, a, x, b,p,e.
printf("escreva uma letra\n");
fflush(stdin);
scanf("%s",&letra);

switch(letra){
case 'o':
case 't':
case 'i':
case 'm':
case 'u':
case 's':
case 'c':
case 'r':
case 'n':
case 'g':
case 'p':
case 'a':
case 'x':
case 'b':
case 'e':
for(i=0;i<5;i++){
    for(j=0;j<30;j++){
     if(letra== resp[i][j]){
        jogo[i][j]=letra;
     }
    }
}
break;
default:
    el=el+1;
    printf("Essa letra nao esta presente\n");
}
tabela();

}else{
printf("escolha invalida\n");
}
x=0;
for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 30; j++) {
            if (jogo[i][j] == resp[i][j]) {
            x=x+1;
            }
        }
    }
}

if(e==2|| el==3){
    printf("\nque pena, reinicie o programa e tente de novo\n");
}else{
printf("\nPARABENS, VOCE ACERTOU TODAS\n");
}

}
