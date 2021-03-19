#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brojsek,min=0,sat=0,dan=0;
    printf("Unesite broj sekundi:");
    scanf("%d",&brojsek);
    if(brojsek<0)
        brojsek=brojsek*(-1);

    if(brojsek>60)
    {
        min=(brojsek/60);
        brojsek=brojsek-min*60;
    }

    if(min>=60)
    {
        sat=(min/60);
        min=min-sat*60;
    }

    if(sat>=24)
    {
        dan=(sat/24);
        sat=sat-dan*24;
    }
    printf("Pretvoreno: %d d %d h %d m %d s",dan,sat,min,brojsek);
    return 0;
}
