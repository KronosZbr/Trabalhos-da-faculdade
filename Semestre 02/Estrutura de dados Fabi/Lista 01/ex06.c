#include <stdio.h>
#include <stdlib.h>
int soma( int num){
    int a,b;
    a = num %10;
    printf("Valor de a = %i\n",a);
    b = num/10;
    if(b<=0){
        return a;
    }else{
        return a+soma(b);
    }
}
int main() {
    int num;
scanf("%d", &num);
printf("a soma dos digitos do numero eh %d\n",soma(num));
}