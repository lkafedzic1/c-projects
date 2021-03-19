#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x,a;
	srand(time(NULL));
	x=rand()%100;
	printf("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
	while(1) {
		printf("Unesite broj: ");
		scanf("%d",&a);
		if(a==-1) {
			printf("Kraj igre.");
			break;
		}
		if(x>a)
			printf("VECI\n");
		else if(x<a)
			printf("MANJI\n");
		else if(x==a) {
			printf("JEDNAK\n");
			printf("Kraj igre.");
			break;
		}
	}
	return 0;
}
