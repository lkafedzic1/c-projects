#include <stdio.h>

int main() {
	int i,j;
	printf("%3c %1c %3i %3i %3i %3i %3i %3i %3i %3i %3i %3i \n",'X','|',1,2,3,4,5,6,7,8,9,10);
	printf("----+----------------------------------------\n");
	for(i=1;i<=10;i++) {
		for(j=1;j<=10;j++) {
			if (j==1) printf("%3i %1c", i, '|');
		printf("%4i", i*j);
		}
	printf("\n");
	}
return 0;
}
