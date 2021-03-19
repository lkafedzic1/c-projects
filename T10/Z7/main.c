#include <stdio.h>
#define vel 100
/*Funkcija za unos stringa*/
void unos (char niz[],velicina) {
 int i=0;
 char znak=getchar();
 if(znak=='\n') znak==getchar();
 while(znak!='\n' && i<velicina-1) {
  niz[i]=znak;
  i++;
  znak=getchar();
 }
 niz[i]='\0';
}

char* skrati(char *s) {
 char* pok=s;
 /*Prolazak kroz recenicu*/
 while(*s!='\0') {
 if(*s!=' ') {
 int j=1;
 /*Brojanje slova u rijeci*/
 while(*(s+j)!=' ' && *(s+j)!='.' && *(s+j)!='\0')
j++;
/*Skracivanje ako je broj slova veci
od 10*/
 if(j>9) {
 int k=3;
 *(s+k)='.';
 k++;
 while(*(s+k)!='\0')
 {
 *(s+k)=*(s+j);
 k++;
 j++;
 }
 *(s+k)=*(s+j);
 }
 }
s++;
 }
 return pok;
}
int main()
{
 char string[vel];
 printf("Unesite recenicu: ");
 /*Unos strina.*/
unos(string);
 /*Ispis stringa nakon poziva funkcije.*/
 printf("String: %s", skrati(string));
 return 0;
}