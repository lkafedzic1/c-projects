#include <stdio.h>
#define duzina 50
void unos (char* string) {
 char c;
 int i=0;
 do {
  c=getchar();
  string[i]=c;
  i++;
  } while(c != '\n' && i < duzina);
  string[i-1]='\0';
}

void izbaci(char *string, int rijec) {
 /*Stavljamo pokazivaca na prvo slovo u
stringu*/
 while (*string < 'A' || *string > 'z' || (*string > 'Z' && *string < 'a'))
  string++;
  int i = 0;
  int broj_rijeci = 0;
  int k = 0;
  /*Prolazimo kroz string*/
 while (*(string+i) != '\0')
 {
 /*Pratimo nailazak na razmak*/
 if ((*(string+i) < 'A' || *(string+i) > 'z' || (*(string+i) > 'Z' && *(string+i) < 'a')) &&((*(string+i+1) >= 'A' && *(string+i+1) <= 'Z') || (*(string+i+1) >= 'a' && *(string+i+1)<='z') || *(string+i+1)=='\0')) {
  i++;
  k++;
/*Brisanje rijeci, tj. pomjeranje ostatka stringa
ulijevo za broj slova u rijeci*/
 if (++broj_rijeci == rijec) {
 do {
 *(string+i-k) = *(string+i);
   string++;
 } while (*(string+i-k)!='\0');
 *(string+i-k)='\0';
 break;
 }
 /*k pamti duzinu zadnje rijeci pa se
nakon svake rijeci restartuje*/
 k = 0;
 }
k++;
i++;
 }
}

int main()
{
 char recenica[duzina];
 printf("Unesite recenicu: ");
unos(recenica);
 int n;
 printf("Unesite koju rijec zelite
izbaciti:");
 scanf("%i", &n);
izbaci(recenica, n);
 /*Ispis promijenjene recenice*/
 printf("\nRecenica: %s", recenica);
 return 0;
}