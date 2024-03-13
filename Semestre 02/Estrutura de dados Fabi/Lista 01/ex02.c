#include <stdio.h>
#include <stdlib.h>

int mult(int x,int n){
if(n==0){
    return 1;
}
else{

    return x*mult(x,n-1);//recursão
}

}


int main()
{
    int x,n;
    printf("Digite o x: ");
    scanf("%d", &x);
    printf("\n Digite o n: ");
    scanf("%d", &n);
    printf("\n Resultado = %d",mult(x,n));
}