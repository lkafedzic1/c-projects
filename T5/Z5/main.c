#include <stdio.h>

int main() {
	int i,x=0,brojac[101]={0};
	printf("Unesite brojeve: \n");
	for(;;) {
		scanf("%d",&x);
		if(x==-1)	
			break;
		if(x>=0 && x<=100) 
			brojac[x]++;
		else 
			printf("Brojevi moraju biti izmedju 0 i 100!\n");
	}
	for(i=0;i<101;i++) {
		if (brojac[i]>0)
		printf("Broj %d se javlja %d puta.\n",i,brojac[i]);
	}
	return 0;
}
