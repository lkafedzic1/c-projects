#include <stdio.h>
#include <stdlib.h>

int main()
{
    float stepeni,probna;
    int minute,sekunde,step;

    printf("Unesite stepene:");
    scanf("%f",&stepeni);

    step=stepeni;
    probna=(stepeni-step)*60;
    minute=probna;
    probna=(probna-minute)*60;
    sekunde=probna;
    if(probna-sekunde<0.8)
        sekunde=probna;
    else
        sekunde=probna+1;
    printf("%g = %d^ %d' %d''",stepeni,step,minute,sekunde);
    return 0;
}
