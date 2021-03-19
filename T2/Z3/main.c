#include <stdio.h>

int main() {
	int dan,mjesec;
	printf("Dan: ");
	scanf("%d",&dan);
	printf("Mjesec: ");
	scanf("%d",&mjesec);
	
	if(mjesec==1) {
		if(dan<=19)	{
			printf("Vas znak je Jarac!");
		} else {
			printf("Vas znak je Vodolija!");
		}
	}
	if(mjesec==2) {
		if(dan<=18) {
			printf("Vas znak je Vodolija!");
	} else {
		printf("Vas znak je Ribe!");
	}
	}
	if(mjesec==3) {
		if(dan<=20) {
		printf("Vas znak je Ribe!");
	} else {
		printf("Vas znak je Ovan!");
	}
	}
	if(mjesec==4) {
		if (dan<=19) {
		printf("Vas znak je Ovan!");
	} else {
		printf("Vas znak je Bik!");
	}
	}
	if(mjesec==5) {
		if(dan<=20) {
			printf("Vas znak je Bik!");
	} else {
		printf("Vas znak je Blizanci!");
	}
	}
	if(mjesec==6) {
		if(dan<=20) {
			printf("Vas znak je Blizanci!");
	} else {
		printf("Vas znak je Rak!");
	}
	}
	if(mjesec==7) {
		if(dan<=22) {
			printf("Vas znak je Rak!");
	} else {
		printf("Vas znak je Lav!");
	}
	}
	if(mjesec==8) {
		if(dan<=22) {
			printf("Vas znak je Lav!");
	} else {
		printf("Vas znak je Djevica!");
	}
	}
	if(mjesec==9) {
		if(dan<=22) {
		printf("Vas znak je Djevica!");
	} else {
		printf("Vas znak je Vaga!");
	}
	}
	if(mjesec==10) {
		if(dan<=22) {
			printf("Vas znak je Vaga!");
	} else {
		printf("Vas znak je Skorpija!");
	}
	}
	if(mjesec==11) {
		if(dan<=21) {
			printf("Vas znak je Skorpija!");
	} else {
		printf("Vas znak je Strijelac!");
	}
	}
	if(mjesec==12) {
		if(dan<22) {
			printf("Vas znak je Strijelac!");
	} else {
		printf("Vas znak je Jarac!");
	}
	}
	return 0;
}
