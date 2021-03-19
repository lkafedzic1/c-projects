#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define velicina 100
#define vel 6

struct Student
{
 int indeks;
 int predmet;
 int ocjena;
};
struct Predmet
{
 int redni_broj;
 char ime[50];
};
void unos (char* string, int duzina)
{
 char c;
 int i = 0;
 do
 {
c = getchar();
 *(string+i) = c;
i++;
 }
 while (c != '\n' && i < duzina);
 *(string+i-1) = '\0';
}
void Ocisti ()
{
 char c;
 while((c=getchar()) != '\n' && c != EOF);
}
int main ()
{
FILE* ulaz;
ulaz = fopen("ispiti.txt", "r");
 /*Provjera da li je uspjelo otvaranje datoteke*/
 if(ulaz == NULL)
 {
 printf("Greška prilikom otvaranja datoteke ispiti.txt! \n");
 exit(1);
 }
 int i = 0;
 struct Student osoba[velicina];
 /*Ucitavanje podataka iz datoteke u niz struktura*/
 while (fscanf(ulaz, "%i %i
%i\n", &osoba[i].indeks, &osoba[i].predmet, &osoba[i].ocjena) != EOF && i < velicina)
i++;
i--;
 /*Nakon ucitavanja podataka zatvaramo datoteku*/
 fclose(ulaz);
 int izbor;
 do
 {
 printf("\nUnesite 1 za statistiku studenta, 2 za statistiku predmeta, 0 za izlaz:");
 scanf("%i", &izbor);
Ocisti();
 if ( izbor == 1)
 {
 int br_indeksa;
 int l;
 int izasao = 0;
 int polozio = 0;
 float suma_polozenih = 0.0;
 printf("Unesite broj indeksa:");
 scanf("%i", &br_indeksa);
Ocisti();
 /*Brojanje ispita na koje je student izasao, koje je polozio i prosjecne ocjene*/
 for (l = 0; l < i; l++)
 {
 if (osoba[l].indeks == br_indeksa)
 {
 if (osoba[l].ocjena > 5)
 {
suma_polozenih += osoba[l].ocjena;
polozio++;
 }
izasao++;
 }
 }
 if (izasao == 0)
 printf("Osoba sa tim brojem indeksa ne postoji.");
 else printf("Student je polagao ispite iz %i predmeta, a polozio je %i (%.2f %%).\n Prosjecna ocjena polozenih predmeta je %.2f.",izasao, polozio, (polozio*100.)/izasao, suma_polozenih/polozio);
 }
 else if ( izbor == 2 )
 {
 /*Otvaranje datoteke predmeti*/
ulaz = fopen("predmeti.txt", "r");
 /*Provjera da li je uspjelo otvaranje datoteke*/
 if(ulaz == NULL)
 {
 printf("Greška prilikom otvaranja datoteke predmeti.txt! \n");
 exit(1);
 }
 /*Ucitavanje datoteke u niz*/
 int j = 0;
 struct Predmet imena[vel];
 do
 {
 fscanf(ulaz, "%i ", &imena[j].redni_broj);
 fgets (imena[j].ime, 50, ulaz);
imena[j].ime[strlen (imena[j].ime)-1] = '\0';
j++;
 }
 while (j < vel );
j--;
 /*Nakon ucitavanja podataka zatvaramo datoteku*/
 fclose(ulaz);
 /*Odabir predmeta*/
 char ime_predmeta[50];
 int podudarnost = 0;
 int broj_predmeta;
 int k;
 do
 {
/*Unos predmeta i ispit postojanja istog*/
 printf("Unesite predmet: ");
unos(ime_predmeta, 50);
 for (k = 0; k < j; k++)
 {
 if (strcmp(ime_predmeta, imena[k].ime) == 0)
 {
podudarnost = 1;
broj_predmeta = imena[k].redni_broj;
 }
 }
 if (podudarnost == 0)
 printf("Nepostojeci predmet!\n");
 }
 while(podudarnost == 0);
j = 0;
 float suma_ocjena = 0;
 int broj_prolaza = 0;
 int broj_izlazaka = 0;
 /*Brojanje ocjena za odredjeni predmet i prolaznost na istom*/
 do
 {
 if ( broj_predmeta == osoba[j].predmet )
 {
 if (osoba[j].ocjena > 5)
broj_prolaza++;
suma_ocjena += osoba[j].ocjena;
broj_izlazaka++;
 }
 }
 while ( j++ < i);
 /*Ispis*/
 printf("Prosjecna ocjena: %.2f\nProlaznost: %.2f%%", suma_ocjena/broj_prolaza, (broj_prolaza*100.)/broj_izlazaka);
 }
 }
 while (izbor != 0);
 return 0;
}