#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL,"");
  int x=1, n;
  float h;

  printf("qual valor voce deseja para calcular a serie harmonica?");
  scanf("%d", &n);

  while (x <= n){
    h = h + (1.0 / x);
    x++;
  }


    printf("com o valor %d, resultado da serie harmonica é: %f",n,h);

  return 0;
}
