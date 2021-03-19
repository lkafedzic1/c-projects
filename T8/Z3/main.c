#include <stdio.h>

float maxtemp(float *p,int vel) {
	float max;
	int i;
	max=*p;
	for(i=0; i<vel; i++) {
		if(*p>max) {
			max=*p;
		}
		p++;
	}
	return max;
}
float prtemp(float *p,int vel) {
	int i;
	float suma=0;
	for(i=0; i<vel; i++) {
		suma+=*p;
		p++;
	}
	return suma/8;
}

int main() {
	int i=0,vel=0;
	float niz[100],max,prosjek;
	printf("Unesite broj mjerenja: ");
	scanf("%d",&vel);
	printf("Unesite temperature: ");
	for(i=0;i<vel;i++) {
		scanf("%f",&niz[i]);
	}
	
	max=maxtemp(niz,vel);
	printf("Maksimalna temperatura: %.1f\n",max);
	prosjek=prtemp(niz,vel);
	printf("Prosjecna temperatura: %.1f", prosjek);
	return 0;
}
