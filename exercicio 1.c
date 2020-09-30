#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

  setlocale(LC_ALL,"");
  int x=0;
  float chico = 1.50, ze = 1.10;

  while (chico-ze>=0){
    chico = chico+0.02;
    ze = ze+0.03;
    x = x+1;
  }

  printf("zé passará de chico após %d anos",x);

  return 0;
}
