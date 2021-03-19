#include <stdio.h>
#define A 3 
#define B 3 
int main()
{
	double M[A][B]; 
 	int i, j; 
 	double suma=0;
 	for (i=0; i<A; i++) {
 		for (j=0; j<B; j++) {
 		printf("Unesite element niz[%i][%i]: ", i+1, j+1);
 		scanf("%lf", &M[i][j]);
 		}
	}
 	for (i=0; i<A; i++) {
 		for (j=0; j<B; j++) {
			 if ( (i==0) || (i==A-1) || (j==0 && i>0 && i<A-1) || (j==B-1 && i>0 && i<(A-1))) 
				suma+=M[i][j];
		 }
 	}

	 printf("Suma elemenata na rubu unijete matrice je: %.2f", suma);
return 0;
}
