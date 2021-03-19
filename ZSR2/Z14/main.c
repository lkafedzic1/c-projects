#include <stdio.h>
#include <stdlib.h>
#define G 2015

int main()
{
    int godrod,god;
    char spol;
    printf("Unesite godinu rodjenja osobe:\n");
    scanf("%d",&godrod);
    printf("Unesite spol osobe (m/M ili z/Z):");
    scanf(" %c",&spol);

    if(godrod<G && (spol=='m' || spol=='M' || spol=='z' || spol=='Z'))
    {
    god=G-godrod;
        printf("Osoba ima %d godin",god);
    if(god==11 ||god%10>4 || god%10==0)
        printf("a, klasificirana je u kategoriju:\n");
    else if(god%10==1)
        printf("u, klasificirana je u kategoriju:\n");
    else if(god%10>1 && god%10<5)
        printf("e, klasificirana je u kategoriju:\n");



    if(spol=='m' || spol=='M')
    {
    if(god<6)
        printf("'prije skole'");
    else if(god>=6 && god<14)
        printf("'osnovna skola'");
    else if(god>=14 && god<18)
        printf("'srednja skola'");
    else if(god>=18 && god<23)
        printf("'fakultet'");
    else if(god>=23)
        printf("'ostalo'");
        printf(",musko je.");
    }
    else if(spol=='z' || spol=='Z')
    {
      if(god<6)
        printf("'prije skole'");
    else if(god>=6 && god<14)
        printf("'osnovna skola'");
    else if(god>=14 && god<18)
        printf("'srednja skola'");
    else if(god>=18 && god<23)
        printf("'fakultet'");
    else if(god>=23)
        printf("'ostalo'");
        printf(",zensko je.");
    }

    }
    else
    {
        if(godrod>G)
            printf("Neispravna godina rodjenja!");
        else
            printf("Pogresan unos spola osobe!");
    }

    return 0;
}
