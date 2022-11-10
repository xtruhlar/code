#include <stdio.h>

int main(void)
{
  int x, N, f;
  f = 1;
  printf("Zadaj nezaporne cele cislo: ");
  scanf("%d", &N);

  while (N < 0) {
    printf(" Zadaj NEZAPORNE cele cislo: ");
    scanf("%d", &N);
  }

  for (x = 1; x <= N; x++)
    f = f * x;
  printf("Faktorial cisla %d je: %d", N, f);

  return (0);
}

/*

Úloha 3.5:

Napíšte program, ktorý načíta iba nezáporné celé číslo N (načítavanie opakujte dovtedy pokiaľ nie sú splnené všetky podmienky).
Výstupom programu je faktoriál čísla N.

Ukážka vstupu: 
5

Výstup pre ukážkový vstup: 
120

*/
