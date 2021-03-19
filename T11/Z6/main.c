#include <stdio.h>

struct Osoba {
		char ime[15];
		char prezime[20];
		int telefon;
	};

void unesi(char niz[], int velicina) {
    char znak = getchar();
    if (znak == '\n') znak=getchar();
    int i = 0;
    while (i < velicina-1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\0';
}


struct Osoba unos_osobe(){
	struct Osoba o;
	printf("Unesite ime: ");
	unesi(o.ime,15);
	printf("Unesite prezime: ");
	unesi(o.prezime,20);
	printf("Unesite broj telefona: ");
	scanf("%d",&o.telefon);
	return o;
}

struct Osoba ispis_osobe(struct Osoba o){
	printf("%s %s, Tel: %d",o.ime, o.prezime, o.telefon);
	return o;
}

int main() {
	struct Osoba imenik[100];
	int broj;
	int i=0;
	int j;
	do{
		printf("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
		scanf("%d",&broj);
		if(broj==1){
			imenik[i]=unos_osobe();
			i++;
		}
		if(broj==2){
			for(j=0;j<i;j++){
				printf("\n%d. %s %s, Tel: %d",j+1,imenik[j].ime, imenik[j].prezime, imenik[j].telefon);
			}
			printf("\n");
		}
	}
	while(broj!=0);
	return 0;
}