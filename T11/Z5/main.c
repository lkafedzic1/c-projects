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

struct Vrijeme proteklo(struct Vrijeme v1, struct Vrijeme v2){
	struct Vrijeme v3;
	if(v2.sati>v1.sati){
		if(v2.sekunde<v1.sekunde){
			v2.sekunde+=60;
			v2.minute--;
		}
		v3.sekunde=v2.sekunde-v1.sekunde;
		if(v2.minute<v1.minute){
			v2.minute+=60;
			v2.sati--;
		}
		v3.minute=v2.minute-v1.minute;
		v3.sati=v2.sati-v1.sati;
	}
	else {
		if(v1.sekunde<v2.sekunde){
			v1.sekunde+=60;
			v1.minute--;
		}
		v3.sekunde=v1.sekunde-v2.sekunde;
		if(v1.minute<v2.minute){
			v1.minute+=60;
			v1.sati--;
		}
		v3.minute=v1.minute-v2.minute;
		v3.sati=v1.sati-v2.sati;
	}
	return v3;
}



int main() {
	struct Vrijeme v1;
	struct Vrijeme v2;
	printf("Unesite prvo vrijeme (h m s): \n");
	v1=unos_vremena(v1);
	printf("Unesite drugo vrijeme (h m s): \n");
	v2=unos_vremena(v2);
	struct Vrijeme v3;
	v3=proteklo(v1,v2);
	
	printf("Izmedju dva vremena je proteklo %d sati, %d minuta i %d sekundi.",v3.sati,v3.minute,v3.sekunde);
	return 0;
}