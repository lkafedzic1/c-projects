//treba dodavati nova polja u datoteku "ORispit.txt" 

#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */
struct student {
    char prezime[15];
    char ime[15];
    int brbod1;
    int brbod2;
};

int main() {
    struct student PPI[300];
    FILE *fUlaz;
    int i=0,j,k;
    if ((fUlaz=fopen("ORispit.txt","r+"))==NULL) {
        printf("Greska pri otvaranju datoteke ORispit.txt");
        exit(1);
    }
    while (fscanf(fUlaz,"%15s%10s%2d%2d\n", PPI[i].prezime, PPI[i].ime,&PPI[i].brbod1, &PPI[i].brbod2) != EOF)
        i++;
    /* Unos novih studenata */
    int izlaz;
    do {
    struct student novi;
    printf("Unos novog studenta\nIme: ");
    scanf("%s", novi.ime);
    printf("Prezime: ");
    scanf("%s", novi.prezime);
    printf("I parcijalni: ");
    scanf("%d", &novi.brbod1);
    printf("II parcijalni: ");
    scanf("%d", &novi.brbod2);
    PPI[i++] = novi;
    fprintf(fUlaz,"%-15s%-10s%2d %2d\n", novi.prezime, novi.ime,novi.brbod1, novi.brbod2);
    printf("\nZelite li unijeti jos jednog studenta? (0=DA,1=NE) ");
    scanf("%d", izlaz);
    } while(!izlaz);
    
    fclose(fUlaz);
    return 0;
}