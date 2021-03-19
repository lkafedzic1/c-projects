#include <stdio.h>
#define vel 15

void unos(char* string) {
  int i = 0;
  char c;
  /*Unos stringa*/
  do {
      c = getchar();
      string[i] = c;
      i++;
  } while(c != '\n' && i < vel);
  string[i - 1] = '\0';
}

void rot13 (char *string) {
  while (*string!='\0') {
 /*Ako se slovo nalazi izmedju A i M, sifruj ga za 13 slova unaprijed*/
      if((*string>='A' && *string<='M') || (*string>='a' && *string<='m'))
      *string+=13;
 /*Ako se slovo nalazi izmedju M i Z, sifruj ga za 13 slova unazad*/
      else if ((*string>='N' && *string<='Z') || (*string>='n' && *string<='z'))
      *string-=13;
  string++;
 }
}

int main() {
 char rijec[vel];
 /*Unos riječi*/
 printf("Unesite rijec do 15 znakova (ENTER za kraj): ");
 unos(rijec);
 /*Poziv funkcije koja vrsi sifrovanje*/
 rot13(rijec);
 /*Ispis novog stringa.*/
 printf("%s", rijec);
 return 0;
}