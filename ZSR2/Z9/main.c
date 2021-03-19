#include <stdio.h>
#include <stdlib.h>

int main()
{
    int niz[10],i;
    printf("Unesite 10 prirodnih brojeva: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&niz[i]);
    }
     for(i=0;i<10;i++)
        {
            if(niz[i]%2==0)
                printf("%015d\n",niz[i]);
            else
                printf("%d\n",niz[i]);
        }

    return 0;
}
