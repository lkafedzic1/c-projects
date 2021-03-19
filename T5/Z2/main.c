#include <stdio.h>
#define BROJ_EL 10

int main() {
	int niz[BROJ_EL],suma=0,suma2=0,i,max,min,brp=0;
	float prosjek=0,prosjek2=0;
	
	for (i=0;i<BROJ_EL;i++) {
		printf("Unesite %d. cijeli broj: ",i+1);
		scanf("%d",&niz[i]);
	}
	suma=0;
	for(i=0;i<BROJ_EL;i++) {
		suma=suma+niz[i];
		prosjek=(float)suma/BROJ_EL;
		if(niz[i]%2==0) {
			suma2=suma2+niz[i];
			brp++;
			}
	}
	if(brp==0)
	prosjek2=0;
	if(brp!=0)
	prosjek2=(float)suma2/brp;
	
	max=niz[0];
	min=niz[0];
	for(i=1;i<BROJ_EL;i++) {
		if(niz[i]>max)
		max=niz[i];
		if(niz[i]<min)
		min=niz[i];
	}
	printf("Srednja vrijednost unesenih brojeva je %.2f.\n", prosjek);
	printf("Srednja vrijednost parnih brojeva je %.2f.\n",prosjek2);
	printf("Najveci element je %d a najmanji %d.",max,min);
	return 0;
}