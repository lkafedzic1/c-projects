#include <stdio.h>

void unesi(char niz[], int velicina) {
	char znak = getchar();
	if (znak == '\n') znak=getchar();
	int i = 0;
	while (i < (velicina-1) && znak != '\n') {
		niz[i] = znak;
		i++;
		znak = getchar();
	}
	niz[i]='\0';
}
void zamijeni_broj(char* s, int a) {
		int* cifre[]={"jedan","dva","tri","cetiri","pet","sest","sedam","osam","devet","deset"};
		int duzina[9]={4,2,2,5,2,3,4,3,4,4};
        int duzina = 4;
        while (*s != '\0') {
            if (*s == 'a') {
                char* kraj = s;
                while (*kraj != '\0') 
                	kraj++;
                while (kraj > s) {
                    *(kraj+duzina[a]) = *kraj;
                    kraj--;
                }
                *s++ = 'j'; *s++ = 'e'; *s++ = 'd';
                *s++ = 'a'; *s++= 'n';
            }
            s++;
        }
}
int main() {
    char tekst[100];
    int a;
    printf("Unesite tekst: ");
     unesi(tekst, 100);
    printf("Unesite cifru: ");
    scanf("%d",&a);
    zamijeni_broj(tekst,a);
    printf("Nakon zamjene: %s", tekst);
    return 0;
}
