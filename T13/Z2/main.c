#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char prezime[20];
    char ime[15];
    int broj_bodova1;
    int broj_bodova2;
};

int main() {
    struct Student studenti[300], tmp, student;
    FILE *ulaz, *izlaz;
    int i, j, vel,max,k;

    if ((ulaz = fopen("ispit.txt","r")) == NULL) {
        printf("Greska pri otvaranju datoteke ispit.txt");
        exit(1);
    }

    if ((izlaz = fopen("usmeni.txt","w")) == NULL) {
        fclose(ulaz);
        printf("Greska pri otvaranju datoteke usmeni.txt");
        exit(1);
    }
    i=0;
     while (fscanf(ulaz,"%20s%15s%2d\n", studenti[i].prezime, studenti[i].ime, &studenti[i].broj_bodova1, &studenti[i].broj_bodova2) == 4 && i<300)
        i++;
    vel = i;

    for(j=0;j<i-1;j++) {
        for(k=j+1;k<i;k++)
            if (studenti[j].broj_bodova1<=10 && studenti[j].broj_bodova2<=10 && studenti[j].ukupno>studenti[j].ukupno) {
                tmp=studenti[j];
                studenti[j]=studenti[k];
                studenti[k]=tmp;
            }
    
    for(i=0;i<vel;i++)
        fprintf(izlaz,"%-20s%-15s%2d\n", studenti[i].prezime, studenti[i].ime, studenti[i].broj_bodova);

    printf ("Izlazna datoteka usmeni.txt je kreirana\n");
    fclose(ulaz);
    fclose(izlaz);
    return 0;
}

