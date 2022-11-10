#include <stdio.h>

int main(void)
{
  int C1, C2;
  char op;
  printf("Zadaj dve cele cisla a znak z mnoziny {+, -, *, /}:");
  scanf("%d %d %c", &C1, &C2, &op);
  switch (op) {
    case '+' : printf("%d + %d = %d", C1, C2, C1 + C2);
    break;
    case '-' : printf("%d - %d = %d", C1, C2, C1 - C2);
    break;
    case '*' : printf("%d * %d = %d", C1, C2, C1 * C2);
    break;
    case '/' : printf("%d / %d = %g", C1, C2, (float)C1 / (float)C2);
    break;
    default : printf("Zle zadana volba."); break;
  }
  return (0);
}

/*

#include <stdio.h>

int main(void)
{
  int C1, C2;
  char op;
  printf("Zadaj dve cele cisla a znak z mnoziny {+, -, *, /}:");
  scanf("%d %d %c", &C1, &C2, &op);
  if (op == '+') {
    printf("%d + %d = %d", C1, C2, C1 + C2);
  } else if (op == '-' ){
    printf("%d - %d = %d", C1, C2, C1 - C2);
  } else if (op == '*' ){
    printf("%d * %d = %d", C1, C2, C1 * C2);
  } else {
    printf("%d / %d = %g", C1, C2, (float)C1 / (float)C2);
  }
  return (0);
}

Úloha 2.7 
Napíšte program, ktorý načíta dve celé čísla C1, C2 a ZNAK z množiny {+, -, *, /} nasledované znakom konca riadku. 
Výstupom programu bude matematická operácia s načítanými číslami C1 a C2. 
Výstup bude reprezentovať veta v tvare “hondotaC1 ZNAK hodnotaC2 = výsledok matematickej operácie”. Na riešenie výhradne používajte podmienku if. 

Ukážka vstupu: 
4 6 + 
Výstup pre ukážkový vstup: 
4 + 6 = 10
*/

/*
Úloha 3.1

Program 2.7 prerobte prostredníctvom príkazu swich().  V prípade, že načítaný znak nie je z danej množiny vypíše sa veta „Zle zadana volba“. 

Ukážka vstupu: 
4 6 + 

Výstup pre ukážkový vstup: 
4 + 6 = 10 

Ukážka vstupu:
4 6 f 

Výstup pre ukážkový vstup:
Zle zadana volba.

*/
