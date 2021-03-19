#include <stdio.h>
#define DUZINA 10
int main() {
    int duz=0,i,j,a=0,niz[DUZINA];
	printf("Unesite elemente niza: ");
    for (i=0; i<DUZINA; i++) {
        scanf("%d", &niz[i]);
        if(niz[i]==-1)
        	break;
    }
    duz=i;
    printf("Unesite element koji treba izbaciti: ");
    scanf("%d",&a);
    for(i=0;i<duz;i++) {
        if(niz[i]==a) {
            for(j=i;j<duz-1;j++) {
                niz[j]=niz[j+1];
            }
            duz--;
            i--;
        }
    }
    printf("Novi niz glasi: ");
    
    for(i=0;i<duz;i++) {
        if(i==duz-1)
            printf("%d",niz[i]);
        else
            printf("%d,",niz[i]);
    }
return 0;
}