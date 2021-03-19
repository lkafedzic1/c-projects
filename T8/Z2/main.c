#include <stdio.h>

float maxtemp (float *p) {
	float max;
	int i;
	max=*p;
	for(i=0; i<8; i++) {
		if(*p>max) {
			max=*p;
		}
		p++;
	}
	return max;
}
float prtemp  (float *p) {
	int i;
	float suma=0;
	for(i=0; i<8; i++) {
		suma+=*p;
		p++;
	}
	return suma/8;
}

int main() {
	int i;
	float niz[8],max,prosjek;
	printf("Unesite temperature: ");
	for(i=0;i<8;i++) {
		scanf("%f",&niz[i]);
	}
	
	max=maxtemp(niz);
	printf("Maksimalna temperatura: %.1f\n",max);
	prosjek=prtemp(niz);
	printf("Prosjecna temperatura: %.1f", prosjek);
	return 0;
}
