#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float broj;
    double korijen;

    printf("Unesi broj: ");
    scanf("%f",&broj);
    korijen=sqrt(sqrt(broj));
    printf("4. korijen iz broja %g je %.10f",broj,korijen);
    return 0;
}
