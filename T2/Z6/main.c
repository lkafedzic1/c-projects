#include <stdio.h>

int main() {
	float a,b,c,d;
	printf("Unesite brojeve a,b,c,d: ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if((a<c && b<c) || (c<a && d<a))
		printf("Skupovi se ne sijeku.");
	if(a<c && d<b)
		printf("Rezultantni interval je [%g,%g].",c,d);
	if(c<a && b<d)
		printf("Rezultantni interval je [%g,%g].",a,b);
	if(a<c && c<b && b<d)
		printf("Rezultantni interval je [%g,%g].",c,b);
	if(c<a && a<d && d<b)	
		printf("Rezultantni interval je [%g,%g].",a,d);
	return 0;
}
