#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a,min=0,max=0;
	do{
		printf("Unesite broj: ");
		scanf("%d",&a);
	} while(a<0);
	
	while(1) {
			if(a==0)
			printf("Najveca cifra je %d a najmanja je %d. ",0,0);
			else{
			max=a%10;
			if(max<(a/10)%10)
				max=(a/10)%10;
				
			min=a%10;
			if(min>(a/10)%10)
				min=(a/10)%10;
				
			a/=10;
			if(a==0)	
				break;
		}
	}
	printf("Najveca cifra je %d a najmanja je %d. ",max,min);
	
	return 0;
}
