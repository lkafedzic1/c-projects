#include <stdio.h>

int main() {
	int x,br5=0,br7=0,br11=0;
	printf("Unesite brojeve: \n");
	while(1) {
		scanf("%d\n",&x);
		
		if(x%5==0)
			br5++;
		if(x%7==0)
			br7++;
		if(x%11==0)
			br11++;
		if(x==-1) {
			printf("Djeljivih sa 5: %d\n",br5);
			printf("Djeljivih sa 7: %d\n",br7);
			printf("Djeljivih sa 11: %d",br11);
			break;
		}
	}
	return 0;
}
