#include <stdio.h>

long faktorijel (int x) {
    long fakt=1;
    int i;
    for(i=2; i<=x; i++) 
        fakt*=i;
    return fakt;
}

int main() {
    float x;
    double suma=0.0;
    int i,n;
    printf("Unesite broj n u intervalu [1, 12]: ");
    while(1) {
        scanf("%d",&n);
        if ((n>=1) && (n<=12))  
            break;
    }
    printf("Unesite realan broj x: ");
    scanf("%f",&x);
    for(i=1; i<=n; i++) {
        suma+=x/faktorijel(i); 
    }
    printf("Suma od 1 do %d za x = %.3f je %.3f ",n,x,suma);
    
	return 0;
}
