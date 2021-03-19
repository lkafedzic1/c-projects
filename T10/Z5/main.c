#include <stdio.h>
#define duzina 100
void unos (char niz[], int velicina) {
  char znak=getchar();
  int i=0;
  if (znak=='\n') znak=getchar();
  while (i<velicina-1 && znak!='\n') {
    niz[i]=znak;
    i++;
    znak=getchar();
  }
  niz[i]='\0';
}
 
char* whitespace (char* string)
{
 int i = 0,j=0;
 char* pok=string;
 /*Prolazimo kroz string*/
 while (*(string+1) != '\0') {
 /*Trazimo razmak bilo kojeg tipa*/
 if (*(string+i)==' ' || *(string+i)=='\t' || *(string+i)=='\n') {
 /*Razmak bilo kojeg tipa postavljamo na obicni razmak*/
    *(string+i) = ' ';
 /*Trazimo da li su sljedeci clanovi razmaci, ako da brojimo ih (j)*/
 j = i+1;
 while (*(string+j)==' ' || *(string+j)=='\t' || *(string+j)=='\n')
 j++;
/*Pomijeramo string za j mjesta ulijevo, ali pocevsi od mjesta i+1 da bismo zadrzali jedan razmak*/
 if (j != i+1) {
 do {
 *(string+i+1)=*(string+j);
   string++;
 } while (*(string+i+1)!='\0');
 *(string+i)='\0';
 }
string = pok;
 }
i++;
 }
 return pok;
}

int main()
{
 char recenica[duzina] ="Danas\nje lijep\ti suncan\n dan.";
 /*Ispis promijenjene recenice*/
 printf("\nRecenica: %s", whitespace(recenica));
 return 0;
}