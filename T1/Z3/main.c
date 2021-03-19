#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,z1,x2,y2,z2,d;
    printf("Unesite koordinate prve tacke ");
    scanf("%f,%f,%f",&x1,&y1,&z1);
    printf("Unesite koordinate druge tacke ");
    scanf("%f,%f,%f",&x2,&y2,&z2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    printf("Udaljenost izmedju dvije tacke je %.2f",d);
    return 0;
}
