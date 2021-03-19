#include <stdio.h>
#define vel 100
void sortiraj (float* p,int vel) {
	int i=0;
	float tmp=0;
	for (i=0; i<vel; i++) {
		if (*p>*(p+1)) {
			tmp=*p;
			*p=*(p+1);
			*(p+1)=tmp;
		}
		p++;
	}
}

int main() {
	float niz[vel];
	int i=0;
	do {
		scanf("%f",&niz[i]);
	} while (niz[i]!=-1 && i++<vel);
	
	sortiraj(niz,i);
	for (i=0; i<vel; i++)
		printf("%f",niz[i]);
	return 0;
}
