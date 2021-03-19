#include <stdio.h>

void unesi (char niz[],int velicina) {
	char znak=getchar;
	if (znak=='\n') znak=getchar;
	int i=0;
	while (i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}

	int prva_rijec(char* s) {
		 int broj_rijeci=0;
 		 char* string=s;
		 while(*string != '\0') {
			 if(((string==s || *(string)==' ') && *(string+1)!=' ') || *(string+1)=='\0')
					broj_rijeci++;
		string++;
	 	}
		char* p=s;
		char* k=s;
		while(*k!=' ') {
			k++;
		}
		*k='\0';
	return broj_rijeci;	
	}

int main() {
	char string;
	printf("Unesite string");
	unesi(string,30);
	int a;
	prva_rijec(a);
	return 0;
}
