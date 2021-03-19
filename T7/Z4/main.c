#include <stdio.h>

	int obrnut(int a) {
	int naopaki = 0;
 	while (a > 0) {
		naopaki = naopaki*10 + a%10;
		a/=10;
 	}
 	return naopaki;
	}
	int main()
	{
	 int broj;
 	printf ("Unesite broj: ");
 	scanf("%d", &broj);
	printf("Broj okrenut naopako glasi: %d", obrnut(broj));
 return 0;
}