#include <stdio.h>

	int pascal(int m, int n) {
	if ( n==1 || n==m )
	return 1;
	else 
	return pascal(m-1,n) + pascal(m-1,n-1);
	}
	
	int main() {
	int i, j, n;
	printf ("Unesite n: \n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for (j=1; j<=i; j++){
			if(j==1)
			printf("%d ",pascal(i,j));
			else
			printf ("%3d ", pascal(i,j));
		}
	printf ("\n");
	}
	
return 0;
}