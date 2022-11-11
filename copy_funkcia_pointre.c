#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  while (*src != '\0') {
    *dst = *src;
    *src++; // ukazovatelska aritmetika
    *dst++;
  }
    *dst = '\0'; // kedze vo while posledny znak vynecha

}
 
int main(){
  char srcString[] = "We added word promptly judged antique ivory buckles for the next prize!";
 char dstString [strlen(srcString) +1]; 
 copy(dstString, srcString);
 printf("%s", dstString); 
}