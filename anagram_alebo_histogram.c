#include<stdio.h>
#include<string.h>

int main() {
  
  int counter1[4] = {0};
  int counter2[4] = {0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  int d = strlen(s1);
  for (int i = 0; i < d; i++){
    if (s1[i] == 'a') {
      counter1[0]++;
    } else if (s1[i] == 'b') {
      counter1[1]++;
    } else if (s1[i] == 'c') {
      counter1[2]++;
    } else if (s1[i] == 'd') {
      counter1[3]++;
    }
  }

  int e = strlen(s2);
  for (int j = 0; j < e; j++){
    if (s2[j] == 'a') {
      counter2[0]++;
    } else if (s2[j] == 'b') {
      counter2[1]++;
    } else if (s2[j] == 'c') {
      counter2[2]++;
    } else if (s2[j] == 'd') {
      counter2[3]++;
    }
  }

  int flag = 0;
  for (int k = 0; k < 4; k++){
    if (counter1[k] != counter2[k]){
      flag = 1;
    } 
  }
  if (flag == 0) {
    printf("Anagram!\n");
  } else {
    printf("Not Anagram!\n");
  }
}