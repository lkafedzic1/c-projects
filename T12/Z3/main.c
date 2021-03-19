#include <stdio.h>
#include <stdlib.h>
#define velicina 100

struct Student {
 int indeks;
 int predmet;
 int ocjena;
};

int main () {
    FILE* ulaz;
    ulaz = fopen("ispiti.txt", "r");
    if (ulaz == NULL) {
    printf("Greška prilikom otvaranja datoteke ispiti.txt! \n");
    exit(1);
 }
 int i = 0;
 struct Student osoba[velicina];
 while (fscanf("%i %i %i\n", &osoba[i].indeks, &osoba[i].predmet, &osoba[i].ocjena) != EOF && i < velicina-1)
    i++;
i--;
 /*Nakon ucitavanja podataka zatvaramo
datoteku*/
 fclose(ulaz);
 int broj_predmeta;
 printf("Unesite predmet: ");
 do {
 scanf("%i", &broj_predmeta);
 } while(broj_predmeta < 1 || broj_predmeta > 5);
 int j = 0, broj_prolaza = 0, broj_izlazaka = 0;
 float suma_ocjena = 0;

 do {
    if ( broj_predmeta == osoba[j].predmet ) {
        if (osoba[j].ocjena >= 6)
            broj_prolaza++;
        suma_ocjena += osoba[j].ocjena;
        broj_izlazaka++;
     }
 } while ( j++ < i);

 printf("Prosjecna ocjena: %.2f\nProlaznost:%.f%%", suma_ocjena/broj_prolaza, (broj_prolaza*100.)/broj_izlazaka);
 return 0;
}