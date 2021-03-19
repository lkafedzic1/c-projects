#include <stdio.h>
#define vel 100

float zaokruzi(float* pok,int duz) {
	int i;
	float tmp=0;
	for(i=0; i<vel; i++) {
		*(pok+i)= *(pok+i)+0.05;
		tmp=(int)(*(pok+i)*10);
		*(pok+i)=tmp/10.;
	}
}

int main() {
	int i=0,j;
	float niz[vel];
	printf("Unesite elemente niza -1 za kraj unosa!");
	do {
		scanf("%d",&niz[i]);
	} while (niz[i]!=-1 && i++<vel);
	
	zaokruzi(niz,i);
	for(j=0; j<i; j++) {
		printf("%f\n",niz[j]);
	}
	
	return 0;
}
