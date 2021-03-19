#include <stdio.h>
#define PI 3.14

int main()
{
    float R, P,V;
    printf ("Unesite poluprecnik:");
    scanf ("%f", &R);
    P=(R*R)*PI;
    V=(4./3)*R*R*R*PI;
    printf("Povrsina kruga sa poluprecnikom %.2f je %.2f\n", R,P);
    printf("Zapremina kugle sa poluprecnikom %.2f je %.2f\n", R,V);
    return 0;
}
