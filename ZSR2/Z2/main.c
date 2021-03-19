#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ocjene[5],i,zbir=0;
    float prosjek=0.0;
    printf("Unesite 5. ocjena:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ocjene[i]);
        zbir+=ocjene[i];

    }
    prosjek=(float)zbir/5;
    printf("Zbir unesenih ocjena je %d,a prosjek je %g",zbir,prosjek);

    return 0;
}
