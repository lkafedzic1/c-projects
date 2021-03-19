#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double broj,broj1;
    int i;

    printf("Unesite broj:\n");
    scanf("%lf",&broj);
    for(i=1;i<=10;i++)
    {
        if(i<=5)
        {
        broj1=pow(broj,i);
        printf("^%d:%20.5f \n",i,broj1);
        }
        else
        {
        broj1=pow(broj,i);
        printf("^%d:%.5f\n",i,broj1);
        }
    }
    return 0;
}
