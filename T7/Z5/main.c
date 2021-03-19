#include <stdio.h>
#include <math.h>

	double faktorijel (int broj) {
 	int i;
 	double fakt = 1;
 	for ( i = 1; i <= broj; i++)
		fakt*=i;
	 return fakt;
	}

	double sinus (double x, int n) {
 	double suma = 0;
 	int i;
 	for (i = 1; i <= n; i++)
		suma += pow(-1, i-1) * pow(x,2*i-1)/faktorijel(2*i - 1);
	return suma;
	}
	
int main()
{
 int n;
 double x;
 printf("Unesite x: \n");
 scanf("%lf", &x);
 printf("Unesite n: \n");
 scanf("%i", &n);
 printf("sin(x)=%lf\n", x, sin(x));
 printf("sinus(x)=%lf\n",sinus(x, n));
 double razlika, postotak;
 razlika=fabs(sinus(x,n)-sin(x));
 postotak=razlika*100;
 printf("Razlika: %lf (%.2f%%).",razlika,razlika);
 return 0;
}