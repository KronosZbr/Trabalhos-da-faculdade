#include<stdio.h>
#include<stdlib.h>
int soma(int x,int n){
if(n==0){
    return 0;
}
else{
printf("%d + ",x);
    return x+soma(x,n-1);//recursão
}

}


int main()
{
    int x,n;
    printf("Digite o x: ");
    scanf("%d", &x);
    printf("\n Digite o n: ");
    scanf("%d", &n);
    printf("\n Resultado da soma = %d",soma(x,n));
}