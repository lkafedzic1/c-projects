#include <stdio.h>


void unesi(char niz[], int velicina) {
    char znak = getchar();
    int i = 0;
    if (znak == '\n') znak=getchar();
    while (i < velicina-1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\0';
}


int prebroji(char* s, char znak) {
    int broj = 0;
    while (*s != '\0') {
        if (*s == znak)
            broj++;
        s++;
    }
    return broj;
}

int duzina (char *s) {
	int d=0;
	while (*s !='\0') {
		d++;
		s++;
	}
return d;
}

int main() {
    char a[80],c;
    printf ("\nUnesite jednu rijec do 80 znakova (ENTER za kraj): ");
    unesi(a, 80);
    printf ("\nKoji znak treba prebrojati: ");
    scanf ("%c", &c);
    printf ("\nUnesena rijec sadrzi %d znakova",duzina(a));
    printf ("\nBroj znakova %c je: %d\n",c,prebroji(a,c));
    return 0;
}
