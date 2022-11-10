#include <stdio.h>

int main(void) {
    
    int i, l, N;
    printf("Zadaj cele cislo: ");
    scanf("%d", &N);
    
    if (N >=1 && N <=15) {
      for (int i = 0; i < N; i++) {
        printf("%*d: ", 2, i + 1); // stlpec

      for (int l = N - i; l > 0; l--) { // N - index riadku
            printf("%*d", 3, l); //kolko miest bude mat cislo l napr _ _ 4
            
      }
      printf("\n");
      }
    }
    
    else {
    printf("Cislo nie je z daneho intervalu.");
    return 0;
    }  

}

/*
Úloha 3.7: 
Napíšte program, ktorý načíta číslo N. Ak je N < 1 alebo N > 15, program vypíše chybovú hlášku Cislo nie je z daneho intervalu a program sa skončí. 
V opačnom prípade program vypíše N riadkov, kde každý bude obsahovať’ číslo riadku, dvojbodku, medzeru a čísla oddelené medzerou. V prvom riadku budú za dvojbodkou vypísané čísla od N po 1. 
V každom nasledovnom riadku bude vždy o jedno číslo menej. Všetky čísla vypisujte na 2 miesta 
(viď dokumentácia funkcie printf http://www.cplusplus.com/reference/cstdio/printf/). 
Ukážka vstupu: 4 
Výstup pre ukážkový vstup: 
1: 4 3 2 1 
2: 3 2 1 
3: 2 1 
4: 1
*/
