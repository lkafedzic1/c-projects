#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */
struct student {
	char prezime[15];
	char ime[15];
	int brbod1;
	int brbod2;
};
/* Funkcija koja ucitava podatke iz datoteke u niz */
	void ucitaj(struct student* niz, int* velicina) {
	FILE *fUlaz;
	int i=0;
	fUlaz=fopen("ORispit.txt","r");
	/* Ako datoteka ne postoji, ne radimo nista */
	if (fUlaz != NULL) {
	while (fscanf(fUlaz,"%15s%10s%2d%2d\n", niz[i].prezime, niz[i].ime,&niz[i].brbod1, &niz[i].brbod2) != EOF)
		i++;
	fclose(fUlaz);
	}
	*velicina=i;
	}
/* Funkcija koja zapisuje sadrzaj niza u datoteku */
	void zapisi(struct student* niz, int velicina) {
	FILE *fIzlaz;
	int i=0;
	if ((fIzlaz=fopen("ORispit.txt","w"))==NULL) {
		printf("Greska pri pisanju u datoteku ORispit.txt");
	exit(1);
	}
	for (i=0; i<velicina; i++)
	fprintf(fIzlaz,"%-15s%-10s%2d %2d\n", niz[i].prezime, niz[i].ime, niz[i].brbod1, niz[i].brbod2);
	fclose(fIzlaz);
	}
/* Funkcija koja sortira niz studenata po prezimenu, a zatim po imenu */
	void sortiraj(struct student* niz, int velicina) {
	int i,j;
	for (i=0; i<velicina-1; i++)
	for (j=i+1; j<velicina; j++) {
	int prezime = strcmp(niz[i].prezime,niz[j].prezime);
	int ime = strcmp(niz[i].ime,niz[j].ime);
	if (prezime>0 || (prezime==0 && ime>0)) {
	struct student priv = niz[i];
	niz[i] = niz[j];
	niz[j] = priv;
	}
	}
	}
/* Funkcija koja pretrazuje niz studenata po prezimenu, a vraca indeks u nizu */
int pretraga(struct student* niz, int velicina) {
	int i,rez=-1;
	char prezime[15];
	printf ("Unesite prezime studenta: ");
	scanf("%s",prezime);
	for (i=0; i<velicina; i++) {
	if (strcmp(niz[i].prezime,prezime)==0) {
	rez=i;
	break;
	}
	}
	if (rez==-1) printf ("Student nije pronadjen!\n\n");
return rez;
}
/* Funkcija koja dodaje jednog studenta u niz */
void dodavanje(struct student* niz, int* velicina) {
	struct student novi;
	printf("Unos novog studenta\nIme: ");
	scanf("%s", novi.ime);
	printf("Prezime: ");
	scanf("%s", novi.prezime);
	printf("I parcijalni: ");
	scanf("%d", &novi.brbod1);
	printf("II parcijalni: ");
	scanf("%d", &novi.brbod2);
	niz[(*velicina)++] = novi;
	sortiraj(niz,*velicina);
}
/* Funkcija brise studenta iz niza */
void brisanje(struct student* niz, int* velicina) {
	int i;
	int indeks = pretraga(niz,*velicina);
	if (indeks==-1) return; /* Student nije pronadjen */
	for (i=indeks; i<*velicina; i++)
	niz[i]=niz[i+1];
	(*velicina)--;
	printf ("\nStudent obrisan.\n\n");
}
/* Funkcija koja sluzi za izmjenu podataka za jednog studenta */
void izmjena(struct student* niz, int velicina) {
	int indeks = pretraga(niz,velicina);
	if (indeks==-1) return; /* Student nije pronadjen */
	printf("Promjena prezimena (%s): ", niz[indeks].prezime);
	scanf("%s", niz[indeks].prezime);
	printf("Promjena imena (%s): ", niz[indeks].ime);
	scanf("%s", niz[indeks].ime);
	printf("Broj bodova na I parcijalnom (%d): ", niz[indeks].brbod1);
	scanf("%d", &niz[indeks].brbod1);
	printf("Broj bodova na II parcijalnom (%d): ", niz[indeks].brbod2);
	scanf("%d", &niz[indeks].brbod2);
	printf ("\nStudent izmijenjen.\n\n");
}
/* Funkcija za ispis datoteke */
void ispis_datoteke() {
	FILE *fUlaz;
	char c;
	if ((fUlaz=fopen("ORispit.txt","r"))==NULL) {
	printf("Greska pri otvaranju datoteke ORispit.txt. Moguce da datoteka jos uvijek ne postoji?");
	return;
}
/* Bukvalno cemo ispisati datoteku na ekranu */
	while ((c=fgetc(fUlaz)) != EOF)
	printf("%c",c);
	fclose (fUlaz);
	printf ("\n");
}
int main() {
	struct student PPI[300];
	int izbor,velicina=0;
/* Najprije ucitavamo podatke iz datoteke */
	ucitaj(PPI,&velicina);
	do {
printf ("MENI\n============\n1 Dodavanje studenta\n2 Brisanje studenta\n3 Izmjena studenta\n4 Ispis sadrzaja datoteke\n0 Izlaz\n\nIzaberite: ");
scanf("%d",&izbor);
/* Prilikom svake operacije koja mijenja niz pozivamo funkciju
zapisi */
if (izbor==1) {
	dodavanje(PPI,&velicina);
	zapisi(PPI,velicina);
} else if (izbor==2) {
	brisanje(PPI,&velicina);
	zapisi(PPI,velicina);
} else if (izbor==3) {
	izmjena(PPI,velicina);
	zapisi(PPI,velicina);
} else if (izbor==4) {
	ispis_datoteke();
} else if (izbor!=0) {
printf ("Pogresan izbor!\n\n");
}
} while(izbor!=0);
return 0;
}