#include <stdio.h>
#include <math.h>

int main() {
	int n,i;
	double suma=0,clan=0;
	printf("Unesite broj n: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		clan=pow(-1,i-1)/i;
		suma=suma+clan;
	}
	printf("Koristeci %d clanova suma je %.3f.",n,suma);
	return 0;
}
