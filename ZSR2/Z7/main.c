#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,D,B;
    int i,j,k;

    printf("Unesite koeficiente a,b i c:");
    scanf("%f%f%f",&a,&b,&c);
    B=b*b-4*a*c;

    if(B>0)
    {
        D=sqrt(b*b-4*a*c);
        i=a;
        j=b;
        k=c;
        if(a-i==0 && b-j==0 && c-k==0)
        {
            printf("Iznos za koeficiente %d ,%d i %d je %.5f",i,j,k,D);
        }
        else
        {
            printf("Iznos za koeficiente %g, %g i %g je %.3f",a,b,c,D);
        }
    }
    else
        printf("Korijen negativnog broja nema realnih rjesenja!");

    return 0;
}
