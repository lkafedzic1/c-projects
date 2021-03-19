#include <stdio.h>

int main()
{
 	int mat[10][10], i, j,min,maks,temp, i_min=0, i_maks=0; 
 	printf("Unesite elemente matrice: ");
 	for (i=0; i<10; i++) {
 		for (j=0; j<10; j++) {
		 	scanf("%d", &mat[i][j]);
	 	}
	}	
	min=mat[0][0];
	maks=mat[0][0];
 	for (i=0; i<10; i++) {
 		for (j=0; j<10; j++) {
 			if (mat[i][j]<min) {
				min=mat[i][j];
				i_min=i;
 			}
 			if (mat[i][j]>maks) {
				maks=mat[i][j];
				i_maks=i;
 			}
		 }
 	}
 	if (i_min==i_maks) {
 		printf("Najmanji i najveci element se nalaze u istom redu.");
 		return 0;
	 }
 	else {

 	for(i=0; i<10; i++) {
		temp=mat[i_maks][i];
		mat[i_maks][i]=mat[i_min][i];
		mat[i_min][i]=temp;
	 }

 printf("Nakon zamjene matrica glasi: \n");
 for (i=0; i<10; i++) {
 	for (j=0; j<10; j++) {
 	printf("%d ", mat[i][j]);
	 }
 	printf("\n");
	 }
 }
 return 0;
}