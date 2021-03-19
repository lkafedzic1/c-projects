#include <stdio.h>

int prost(int x) {
	int i;
	for (i=2; i<=x/2; i++) {
		if (x%i==0) 
			return 0;
	}
	return 1;
}

int main() {
	int i;
	for(i=2; i<100; i++) {
		if (prost(i)==1)
			printf("%d\n",i);
	}
	
	return 0;
}
