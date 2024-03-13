#include<stdio.h>
#include<stdlib.h>

int soma(int n){
    if(n==0){
        return 0;
    }
    else{
        return(n +soma(n-1));
    
    }
}
int main(){
int n;
printf("Digite um inteiro positivo: ");
scanf("%d",&n);
printf("A soma = %d \n", soma(n));
}