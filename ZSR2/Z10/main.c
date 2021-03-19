#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj,x,y,zbir,razlika,proizvod;
    float kolicnik;

    printf("Unesite cijeli broj:");
    scanf("%d",&broj);
    if(broj<0)
        broj=broj*(-1);

    x=broj%10;
    broj=broj/10;
    y=broj%10;

    zbir=y+x;
    razlika=y-x;
    proizvod=y*x;
    kolicnik=(float)y/x;

    if(x==0)
    {
         printf("Zbir zadnje dvije cifre (%d i %d) je:%d\n",y,x,zbir);
    printf("Razlika zadnje dvije cifre (%d i %d) je:%d\n",y,x,razlika);
    printf("Proizvod zadnje dvije cifre (%d i %d) je:%d\n",y,x,proizvod);
    printf("Kolicnik zadnje dvije cifre (%d i %d) je:Nemoguce!\n",y,x);
    }
    else
        {
            printf("Zbir zadnje dvije cifre (%d i %d) je:%d\n",y,x,zbir);
            printf("Razlika zadnje dvije cifre (%d i %d) je:%d\n",y,x,razlika);
            printf("Proizvod zadnje dvije cifre (%d i %d) je:%d\n",y,x,proizvod);
            printf("Kolicnik zadnje dvije cifre (%d i %d) je:%.6f\n",y,x,kolicnik);
        }

        return 0;
}
