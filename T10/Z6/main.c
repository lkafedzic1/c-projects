#include <stdio.h>
#define duzina 100
/*void unos (char niz[],int velicina) {
 int i;
 char znak=getchar();
 if(znak=='\n') znak==getchar();
 while (znak!='\n' && i<velicina-1) {
  niz[i]=znak;
  i++;
  znak=getchar();
 }
 niz[i]='\0';
}
*/ 
void izbaci(char *string) {
 int i = 0;
 char* pok=string;
 /*Prolazimo kroz string*/
 while (*(string+i) != '\0') {
 /*Pratimo nailazak na početak komentara
sa crticom i zvjezdicom */
 if (*(string+i) == '/' && *(string+i+1) == '*')
 {
 /*Brojimo koliko mjesta zauzima
komentar*/
 int k = i + 1;
 do {
 k++;
 } while (*(string+k)!='*' && *(string+k+1)!='/');
 /*Povecavamo k za 2 da bi se nalazilo
na prvom mjestu iza komentara*/
k += 2;
 /*Pomijeramo cijeli string iza
komentara ulijevo.*/
 do {
 *(string+i) = *(string+k);
 string++;
 } while (*(string+i)!='\0');
 *(string+i-1)='\0';
 /*Vracamo pokazivac na pocetak stringa*/
 string = pok;
 }
 if (*(string+i) == '/' && *(string+i+1) == '/')
 {
 /*Brojimo koliko mjesta zauzima komentar*/
 int k = i;
 do {
 k++;
 } while (*(string+k)!='\n' && *(string+k)!='\0');
 k+=2;
 /*Pomijeramo cijeli string iza komentara ulijevo.*/
 do {
 *(string+i) = *(string+k);
 string++;
 }
 while (*(string+i)!='\0');
 *(string+i-1)='\0';
 /*Vracamo pokazivac na pocetak stringa*/
 string = pok;
 }
 i++;
 }
}

int main()
{
 char recenica[10] ="Danas je /*lijep*/ i //suncan\n dan.";
izbaci(recenica);
 /*Ispis promijenjene recenice*/
 printf("\nRecenica: %s", recenica);
 return 0;
}