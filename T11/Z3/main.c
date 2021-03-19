#include <stdio.h>
#include <math.h>
#define PI 4.0 * atan (1.0)

struct Tacka {
    float x,y;
};
struct Kruznica {
    struct Tacka centar;
    float poluprecnik;
};

struct Tacka unos_tacke() {
    struct Tacka t;
    printf ("Unesite koordinate tacke (x, y): \n");
    scanf ("%f,%f", &t.x, &t.y);
    return t;
}

struct Kruznica unos_kruznice() {
    struct Kruznica k;
    printf ("Unesite centar kruznice:\n");
    k.centar = unos_tacke();
    printf ("Unesite poluprecnik kruznice: \n");
    scanf("%f", &k.poluprecnik);
    return k;
}

float udaljenost(struct Tacka t1, struct Tacka t2) {
    return sqrt( (t1.x-t2.x)*(t1.x-t2.x) + (t1.y-t2.y)*(t1.y-t2.y) );
}

float obim_kruznice (struct Kruznica k) {
	return 2*PI*k.poluprecnik;
}

float povrsina_kruznice (struct Kruznica k) {
    return k.poluprecnik*k.poluprecnik*PI;
}

struct Pravougaonik {
    struct Tacka dole_lijevo;
    struct Tacka gore_desno;
};

struct Pravougaonik unos_pravougaonika() {
    struct Pravougaonik p;
    printf("Unesite tacke: \n");
    p.dole_lijevo=unos_tacke();
    p.gore_desno=unos_tacke();
    return p;
}

float obim_pravougaonika (struct Pravougaonik p) {
    float a, b;
    a=p.gore_desno.x-p.dole_lijevo.x;
    b=p.gore_desno.y-p.dole_lijevo.y;
    return 2*a+2*b;
}

float povrsina_pravougaonika (struct Pravougaonik p) {
    float a,b;
    a=p.gore_desno.x-p.dole_lijevo.x;
    b=p.gore_desno.y-p.dole_lijevo.y;
    return a*b;
}

int tacka_u_pravougaoniku (struct Tacka t, struct Pravougaonik p) {
    if((t.x >= p.dole_lijevo.x) && (t.x <= p.gore_desno.x) && (t.y>=p.dole_lijevo.y)&&(t.y<=p.gore_desno.y))
        return 1;
    
    return 0;
}

int main() {
    struct Kruznica k;
    struct Pravougaonik p;
    struct Tacka t;
    float d;
    printf ("Unesite kruznicu:\n");
    k = unos_kruznice();
    printf ("Unesite neku tacku:\n");
    t = unos_tacke();
    printf ("Unesite pravougaonik:\n");
    p = unos_pravougaonika();

    
    d = udaljenost(t, k.centar);


    if (d<k.poluprecnik)
        printf("Tacka je unutar kruznice.");
    else if (d==k.poluprecnik)
        printf("Tacka je na kruznici.");
    else
        printf("Tacka je izvan kruznice.");
        
    printf("\nObim kruznice: %.3f \n", obim_kruznice(k));
    printf("Povrsina kruznice: %.3f \n", povrsina_kruznice(k));
    printf("%.2f %.2f", obim_pravougaonika(p), povrsina_pravougaonika(p));
    if (tacka_u_pravougaoniku(t,p))
        printf("Tacka je u pravougaoniku.\n");
    else
        printf("Tacka nije u pravougaoniku.\n");
    
    return 0;
}