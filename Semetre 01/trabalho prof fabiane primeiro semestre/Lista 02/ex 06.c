#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float maca,preco;
    printf("Digite quantas macas voce quer: ");
    scanf("%f", &maca);
    if (maca >= 12)
    {
        preco = maca * 1;
        printf("\n voce pediu %0.f macas e o total deu: %0.f", maca, preco);
    }
    else if (maca < 12)
    {
        preco = maca * 1.30;
        printf("\n voce pediu %0.f macas e o total deu: %0.2f", maca, preco);
    }
     }