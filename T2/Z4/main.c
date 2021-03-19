#include <stdio.h>
int main() {
	int a,b,c,i=0,min,sred,max;
	printf("Unesite tri broja: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a!=b)
		i++;
	if(a!=c)
		i++;
	if(b!=c)
		i++;
		
	if(a<50 || a>200 || b<50 || b>200 || c<50 || c>200) {
		printf("Svi brojevi nisu iz intervala 50 do 200");		
	} else {
		if(a>b) {
			min=b;
			sred=a;
		} else {
			min=a;
			sred=b;
		}
		if(sred>c) {
			max=sred;
		} else
			max=c;
		if(min>c) {
			sred=min;
			min=c;
		} else 
			sred=c;
		printf("Brojevi poredani po velicini glase: %d,%d,%d\n",min,sred,max);
	  }
	printf("Unesena su %d razlicita broja",i);
	return 0;
}
