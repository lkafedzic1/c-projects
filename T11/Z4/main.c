#include <stdio.h>
#include <stdlib.h>


struct Vrijeme {
		int sati;
		int minute;
		int sekunde;
	};

struct Vrijeme unos_vremena(struct Vrijeme v){
	scanf("%d",&v.sati);
	scanf("%d",&v.minute);
	scanf("%d",&v.sekunde);
	return v;
}

int proteklo(struct Vrijeme v1, struct Vrijeme v2){
	int raz=0;
	int vrijeme1=0;
	int vrijeme2=0;
	vrijeme1=v1.sati*3600+v1.minute*60+v1.sekunde;
	vrijeme2=v2.sati*3600+v2.minute*60+v2.sekunde;
	raz=abs(vrijeme1-vrijeme2);
	return raz;
}



int main() {
	struct Vrijeme v1;
	struct Vrijeme v2;
	printf("Unesite prvo vrijeme (h m s): \n");
	v1=unos_vremena(v1);
	printf("Unesite drugo vrijeme (h m s): \n");
	v2=unos_vremena(v2);
	printf("Izmedju dva vremena je proteklo %d sekundi.",proteklo(v1,v2));
	return 0;
}