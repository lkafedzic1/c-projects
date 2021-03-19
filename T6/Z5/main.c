#include <stdio.h>
#define r 10 
#define k 10 
int main()
{
 double niz[r][k]; 
 int i, j;
 double min;
 	for (i=0; i<r; i++) {
 		for (j=0; j<k; j++) {
 			printf("Unesite element niz[%i][%i]: ", i+1, j+1);
 			scanf("%lf", &niz[i][j]);
		 }
	 }
	min=niz[0][0];
	 for (i=0; i<r; i++) {
 		for (j=0; j<k; j++) {
 			if (i==j) {
 				if (niz[i][j]<min) min=niz[i][j];
 			}
		 }
 	}
 printf("Najmanji element na glavnoj dijagonali unijete matrice je: %.2f" , min);
 return 0;
}