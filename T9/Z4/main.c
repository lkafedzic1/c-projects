void unos(char* string, int duzina)	{
	 int i = 0;
 	char c;
 	do
	 {
		c = getchar();
		string[i] = c;
		i++;
	 } while(c != '\n' && i < duzina-1);
	string[i] = '\0';
	}
/*Funkcija za mijenjanje malih slova u velika*/
char* velika(char* string) {
	 char* prvi=string;
	 while(*string != '\0') {
 		if(*string>='a' && *string<='z')
		 *string = (*string) - 32;
		string++;
 	  }
 	  return prvi;
}
int main() {
	 char rijec[80];
	 /*Unos stringa*/
	 printf("Unesite rijec do 80 znakova (ENTER za kraj): ");
	unos(rijec, 80);
	 /*Poziv funkcije i ispis novog stringa*/
	 printf("Nakon izvrsavanja funkcije rijec izgleda ovako: %s", velika(rijec));
 	return 0;
}