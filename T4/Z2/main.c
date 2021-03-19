#include <stdio.h>

int main() {
	int a,b,i,j;
	printf("Unesite stranice pravougaonika a,b: ");
	scanf("%d,%d",&a,&b);
	for(i=1;i<=b;i++) {
		for(j=1;j<=a;j++) {
			if((i==1&&j==1)||(i==1&&j==a)||(i==b&&j==1)||(i==b&&j==a))
				printf("+");
			else if((i==1||i==b)&&(j>1&&j<a))
				printf("-");
			else if((j==1||j==a)&&(i>1&&i<b))
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
