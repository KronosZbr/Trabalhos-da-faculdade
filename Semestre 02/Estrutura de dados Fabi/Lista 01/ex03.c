#include <stdio.h>
#include <stdlib.h>
#include<time.h>
float soma(float vet[], int n)
{
    if(n==0){
        return 0;
    }
    else{
        return (vet[n-1] + soma(vet,n-1));
    }
}
int main()
{
    int n,i;
 printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    float vet[n];
    srand(time(NULL));
    for(i=0;i<n;i++){
        vet[i]=rand()%100;
    }
for(i=0;i<n;i++){
    printf("%0.2f           ",vet[i]);
}

    printf("a soma igual:%0.2f \n ",soma(vet,n));

}