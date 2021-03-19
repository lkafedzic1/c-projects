#include <stdio.h>
#include <stdlib.h>

int main()
{
    int godine,x;

    printf("Unesite godine:");
    scanf("%d",&godine);

    printf("Imate %d godin", godine);
    if(godine>=0 && godine<=100)
    {
        if(godine == 1)printf("u");
        else if(godine > 9 && godine < 20 || godine % 10 > 4 && godine % 10 < 10) printf("a");
        else printf("e");
    } else printf("Greska!");
    return 0;
}
