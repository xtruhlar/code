#include <stdio.h>

int main(void)
{
  char zn1, zn2;

  printf("Zadaj dve male pismena: ");
  scanf("%c %c", &zn1, &zn2);

  printf("%c %d %c %d", zn1 + 'A' - 'a', zn1 + 'A' - 'a', zn2 + 'A' - 'a', zn2 + 'A' - 'a');
  
  return (0);
}

/*

Úloha 2.4

Napíšte program, ktorý načíta dve malé písmená, vypíše ich ako veľké aj s 
ich ordinálnym dekadickým číslom ACSI tabuľky. Vstupom je jeden riadok 
obsahujúci dve písmená oddelené medzerou. Riadok je ukončený znakom konca 
riadku. Výstupom sú dva riadky, každý ukončený koncom riadku. V každom 
riadku výstupu je veľké písmeno, medzera a ordinálne číslo.

Ukážka vstupu:

a e

Výstup pre ukážkový vstup:

A 65 E 69

*/
