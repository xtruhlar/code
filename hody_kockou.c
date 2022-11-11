#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  // Write your code below
  int randomNumber = rand()%6 + 1;
  printf("%d", randomNumber);
}