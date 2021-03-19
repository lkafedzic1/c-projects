#include <stdio.h>
#define PI 3.14

int main() {
	float a,b,c,h,r,P,V;
	printf("Unesite stranice kvadra ");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("Unesite poluprecnik baze valjka i visinu valjka ");
	scanf("%f,%f",&r,&h);
	P=2*(a*b+a*c+b*c)+(h*2*PI*r);
	V=a*b*c+r*r*PI*h;
	printf("Povrsina tijela je %.2f cm2\n",P);
	printf("Zapremina tijela je %.2f cm3\n",V);
	return 0;
}
