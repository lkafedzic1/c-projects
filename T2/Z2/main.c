#include <stdio.h>
#define NSP1 65.0
#define NSP2 90.0
#define DP1 105.0
#define DP2 140.0
#define P1 65.0
#define P2 80.0

int main() {
	float SP,DP,P;
	printf("Unesite sistolicki, dijastolicki pritisak i puls: ");
	scanf("%f %f %f",&SP,&DP,&P);
	if(SP>NSP1 && SP<NSP2) {
		printf("SP: normalan\n");
	} else {
		printf("SP: nije normalan\n");
	}
	if(DP>DP1 && DP<DP2) {
		printf("DP: normalan\n");
	} else {
		printf("DP: nije normalan\n");
	}
	if(P>P1 && P<P2) {
		printf("Puls: normalan\n");
	} else {
		printf("Puls: nije normalan\n");
	}
	
	return 0;
}
