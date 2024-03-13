#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   int y, cont = 1;
   int g, c, x, z, e, n, d;

   while (cont != 0)
   {
      printf("\n Digite o ano da pascoa: ");
      scanf("%d", &y);
      g = (y % 19) + 1;
      c = (y / 100) + 1;
      x = ((3 * c) / 4) - 12;
      z = (((8 * c) + 5) / 25) - 5;
      e = ((11 * g) + 20 + z - x) % 30;
      // epacata
      if ((e == 25 && g > 11) || (e == 24))
      {
         e = e + 1;
      }
      // lua cheia
      n = 44 - e;
      if (n < 21)
      {
         n = n + 30;
      }
      // domigo
      n = (44 - e);
      if (n < 21)
      {
         n = n + 30;
      }
      d = ((5 * y) / 4) - (x + 10);
      n = (n + 7) - ((d + n) % 7);
      if (y > 1582)
      {
         if (n > 31)
         {
            printf("\n Pascoa vai ser em: %d de abril de %d\n", (n - 31), y);
         }
         else
         {
            printf("\n Pascoa vai ser em: %d de marco de %d\n", n, y);
         }
      }
      else if (y < 1582)
      {
         printf("\n Digite um ano maior que 1582!!");
      }
      printf("\n Digite 1 para continuar e 0 para sair: ");
      scanf("%d",&cont);
   }
}