#include <stdio.h>

void zamijeni(int* x, int* y) {
	int tmp=*x;
	*x=*y;
	*y=tmp;
}

int main() {
	int a, b;
	printf("Unesi a i b ");
	scanf("%d %d ",&a,&b);
	zamijeni(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
