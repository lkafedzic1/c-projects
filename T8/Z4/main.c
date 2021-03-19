#include <stdio.h>
#define vel 100 
	int drugi (int niz[], int velicina) {
 	int najveci = 0;
 	int i = 0, flag = 0, indeks;
	for (i = 0; i < velicina; i++) {
		 if (niz[i] >= najveci)
		najveci = niz[i];
	}
	int drugi = 0;
	for (i = velicina - 1; i >= 0; i--) {
		 if (niz[i] >= drugi && niz[i] != najveci) {
			drugi = niz[i];
			indeks = i;
			flag = 1; 
			}
 	}
 
 	if (najveci == 0 || flag == 0)
	indeks = -1;
 	return indeks;
}
int main ()
{
 	int niz[vel];
 	int i = 0;
 	printf("Unesite niz brojeva:");
 	do {
 	scanf("%i", &niz[i]);
	} while (niz[i] != -1 && i++ < vel);
	if (drugi(niz,i) != -1)
 		printf("Indeks drugog po velicini je: %i", drugi(niz,i));
 	else printf("Svi brojevi niza su isti.");
 	return 0;
}