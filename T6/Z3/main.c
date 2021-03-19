#include <stdio.h>
#define DUZINA 10
int main() {
    int i,brojA=0,brojB=0,brojC=0,A[DUZINA],B[DUZINA],C[2*DUZINA];
	printf("Unesite elemente niza A: ");
    for (i=0; i<DUZINA; i++) {
        scanf("%d", &A[i]);
        if(A[i]==-1)
        	break;
    brojA++;
    }
	printf("Unesite elemente niza B: ");
	for(i=0; i<DUZINA;i++) {
		scanf("%d",&B[i]);
		if(B[i]==-1)
			break;
	brojB++;
	}
	
	for(i=0;i<brojA;i++) {
		C[i]=A[i];
	}
	for(i=brojA;i<brojA+brojB;i++) {
		C[i]=B[i-brojA];
	}
	brojC=brojA+brojB;
    printf("Niz C glasi: ");
    for (i=0; i<brojC; i++) {
    	if(i==brojC-1)
    		printf("%d",C[i]);
    	else 
    		printf("%d,",C[i]);
    }

    printf("\n");
    return 0;
}
